#include <stdio.h>

int factorial(int number);

int main() {

    int n, k;
    printf("%s", "Introduceti un numar n:\n");
    scanf("%d", &n);
    printf("Introduceti un numar k unde k <= %d\n", n);
    scanf("%d", &k);

    while (k > n) {
        printf("Introduceti un numar k unde k <= %d\n", n);
        scanf("%d", &k);
    }

    printf("Numarul de permutari = %d\n", factorial(n));
    printf("Numarul de aranjamente de %d luate cate %d = %d\n", n, k, factorial(n) / factorial(n - k));
    printf("Numarul de combinari de %d luate cate %d = %d\n", n, k, factorial(n) / (factorial(k) * factorial(n-k)));

    return 0;
}

int factorial(int number) {

    int factorial = 1;

    if (number < 0) {
        number = number * (-1);
    }

    for (int i = 2; i <= number; i++) {
        factorial *= i;
    }

    return factorial;

}
