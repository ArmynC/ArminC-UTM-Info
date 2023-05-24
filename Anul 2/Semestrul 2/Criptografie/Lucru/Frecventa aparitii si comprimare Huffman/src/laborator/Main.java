package laborator;

import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        String fileName = "text.txt";
        String outputFileName = "statistica.txt";
        Map<Character, Integer> frequencyMap = new HashMap<>();

        try (BufferedReader br = new BufferedReader(new FileReader(fileName))) {
            String line;
            while ((line = br.readLine()) != null) {
                for (int i = 0; i < line.length(); i++) {
                    char character = line.charAt(i);
                    frequencyMap.merge(Character.toLowerCase(character), 1, Integer::sum);
                }
                frequencyMap.merge('\n', 1, Integer::sum);
                br.read();
            }
        } catch (IOException e) {
            e.printStackTrace();
        }

        int totalCharacters = frequencyMap.values().stream().mapToInt(Integer::intValue).sum();

        PriorityQueue<Node> priorityQueue = new PriorityQueue<>();
        frequencyMap.forEach((character, frequency) -> priorityQueue.offer(new Node(character, frequency)));

        while (priorityQueue.size() > 1) {
            Node leftChild = priorityQueue.poll();
            Node rightChild = priorityQueue.poll();
            priorityQueue.offer(new Node(leftChild, rightChild));
        }

        Node rootNode = priorityQueue.poll();
        Map<Character, String> codeMap = new HashMap<>();
        rootNode.traverse(codeMap, "");

        try (FileWriter writer = new FileWriter(outputFileName)) {
            List<Map.Entry<Character, Integer>> sortedFrequencyList = new ArrayList<>(frequencyMap.entrySet());
            sortedFrequencyList.sort(Map.Entry.<Character, Integer>comparingByValue().reversed());

            writer.write("Frecventa, probabilitatea si codarea:\n");
            double entropy = 0;
            double totalLength = 0;
            for (Map.Entry<Character, Integer> entry : sortedFrequencyList) {
                char character = entry.getKey();
                int frequency = entry.getValue();
                double probability = (double) frequency / totalCharacters;
                entropy -= probability * (Math.log(probability) / Math.log(2));
                String code = codeMap.get(character);
                if (character == ' ') {
                    writer.write("SPACE: " + frequency + " (" + String.format("%.2f", probability) + ") [" + code + "]\n");
                } else if (character == '\n') {
                    writer.write("NEWLINE: " + frequency + " (" + String.format("%.2f", probability) + ") [" + code + "]\n");
                } else {
                    writer.write(character + ": " + frequency + " (" + String.format("%.2f", probability) + ") [" + code + "]\n");
                }
                totalLength += frequency * code.length();
            }

            double averageCodeLength = totalLength / totalCharacters;
            double efficiency = entropy / averageCodeLength;
            double capacity = Math.log(2) / Math.log(2);
            double nonUniformRedundancy = 1 - efficiency;
            double compressRate = (1 - averageCodeLength / 8) * 100;
            boolean fundamentalCodingTheoremCheck = entropy < averageCodeLength && averageCodeLength < entropy + 1;

            writer.write("TOTAL: " + totalCharacters + "\n");
            writer.write("\nTextul encodat:\n");

            StringBuilder encodedTextBuilder = new StringBuilder();
            try (BufferedReader br = new BufferedReader(new FileReader(fileName))) {
                String line;
                while ((line = br.readLine()) != null) {
                    for (int i = 0; i < line.length(); i++) {
                        char character = line.charAt(i);
                        encodedTextBuilder.append(codeMap.get(Character.toLowerCase(character)));
                    }
                    encodedTextBuilder.append(codeMap.get('\n'));
                }
            } catch (IOException e) {
                e.printStackTrace();
            }

            String encodedText = encodedTextBuilder.toString();
            writer.write(encodedText + "\n");

            writer.write("\nTextul decodat:\n");
            StringBuilder decodedTextBuilder = new StringBuilder();
            int start = 0;
            for (int i = 1; i <= encodedText.length(); i++) {
                String code = encodedText.substring(start, i);
                for (Map.Entry<Character, String> entry : codeMap.entrySet()) {
                    if (entry.getValue().equals(code)) {
                        decodedTextBuilder.append(entry.getKey());
                        start = i;
                        break;
                    }
                }
            }
            String decodedText = decodedTextBuilder.toString();
            writer.write(decodedText + "\n");

            writer.write("\nEntropia textului de intrare: " + String.format("%.2f", entropy) + "\n");
            writer.write("Lungimea medie a codului: " + String.format("%.2f", averageCodeLength) + "\n");
            writer.write("Eficienta codului: " + String.format("%.2f", efficiency) + "\n");
            writer.write("Capacitatea codului: " + String.format("%.2f", capacity) + "\n");
            writer.write("Redundanta neuniforma: " + String.format("%.2f", nonUniformRedundancy) + "\n");
            writer.write("Rata de compresie: " + String.format("%.0f", compressRate) + "%\n");
            writer.write("Teorema de codare fundamentala a sursei este " + (fundamentalCodingTheoremCheck ? "" : "ne") + "respectata (" + String.format("%.2f", entropy) + " < " + String.format("%.2f", averageCodeLength) + " < " + String.format("%.2f", entropy + 1) + ")");
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}

class Node implements Comparable<Node> {
    private final char character;
    private final int frequency;
    private final Node leftChild;
    private final Node rightChild;

    public Node(char character, int frequency) {
        this.character = character;
        this.frequency = frequency;
        leftChild = null;
        rightChild = null;
    }

    public Node(Node leftChild, Node rightChild) {
        this.character = 0;
        this.frequency = leftChild.frequency + rightChild.frequency;
        this.leftChild = leftChild;
        this.rightChild = rightChild;
    }

    public boolean isLeaf() {
        return leftChild == null && rightChild == null;
    }

    @Override
    public int compareTo(Node o) {
        return frequency - o.frequency;
    }

    public void traverse(Map<Character, String> codeMap, String code) {
        if (isLeaf()) {
            codeMap.put(character, code);
        } else {
            leftChild.traverse(codeMap, code + "0");
            rightChild.traverse(codeMap, code + "1");
        }
    }
}