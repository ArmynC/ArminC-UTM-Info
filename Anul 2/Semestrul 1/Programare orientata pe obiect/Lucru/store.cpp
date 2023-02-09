#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

const int MAX_COMPONENT = 100;
const int MAX_PRODUCT = 100;

// Structure for hardware component
struct Component {
	string type;
	int product_count{};
};

// Structure for product details
struct Product {
	int product_code{};
	int price{};
	string model;
	int year_of_manufacture{};
	int warranty{};
	string manufacturer;
	string country_of_origin;
	int stock{};
};

int componentCount = 0;
Component components[MAX_COMPONENT];
Product products[MAX_COMPONENT][MAX_PRODUCT];

bool ProductExists(int product_code, string type) {
	if (product_code == 0) {
		cout << "Product code cannot be 0. Please enter a different product code." << endl;
		return true;
	}

	for (int i = 0; i < componentCount; i++) {
		if (components[i].type == type) {
			for (int j = 0; j < components[i].product_count; j++) {
				if (products[i][j].product_code == product_code) {
					cout << "Product with code " << product_code << " already exists for component type " << type << "." << endl;
					return true;
				}
			}
			return false;
		}
	}
	return false;
}

void LoadFromFile() {
	string fileName;

	cout << endl << "Enter filename: ";
	cin >> fileName;

	ifstream file(fileName);
	if (file.is_open()) {
		string line;
		while (getline(file, line)) {
			istringstream iss(line);

			string type;
			int product_code, price, year_of_manufacture, warranty, stock;
			string model, manufacturer, country_of_origin;

			getline(iss, type, ',');
			iss >> product_code;
			iss.ignore();
			iss >> price;
			iss.ignore();
			getline(iss, model, ',');
			iss >> year_of_manufacture;
			iss.ignore();
			iss >> warranty;
			iss.ignore();
			getline(iss, manufacturer, ',');
			getline(iss, country_of_origin, ',');
			iss >> stock;

			while (ProductExists(product_code, type)) {
				cout << "Enter another product code or enter 0 to cancel: ";
				cin >> product_code;
				if (product_code == 0) {
					cout << "Operation cancelled." << endl;
					return;
				}
			}

			int componentIndex = -1;
			for (int i = 0; i < componentCount; i++) {
				if (components[i].type == type) {
					componentIndex = i;
					break;
				}
			}
			if (componentIndex == -1) {
				componentIndex = componentCount;
				componentCount++;
				components[componentIndex].type = type;
				components[componentIndex].product_count = 0;
			}
			int productIndex = components[componentIndex].product_count;
			components[componentIndex].product_count++;
			products[componentIndex][productIndex].product_code = product_code;
			products[componentIndex][productIndex].price = price;
			products[componentIndex][productIndex].model = model;
			products[componentIndex][productIndex].year_of_manufacture = year_of_manufacture;
			products[componentIndex][productIndex].warranty = warranty;
			products[componentIndex][productIndex].manufacturer = manufacturer;
			products[componentIndex][productIndex].country_of_origin = country_of_origin;
			products[componentIndex][productIndex].stock = stock;
		}
		file.close();

		cout << endl << "Data loaded successfully." << endl << endl;
	}
	else {
		cout << "Unable to open file " << fileName << endl << endl;
	}
}

// Function to add a new product to a specific component entered with keyboard input
void AddNewProduct() {
	string type;

	cout << endl << "Enter component type: ";

	cin.ignore();
	getline(cin, type);

	int product_code, price, year_of_manufacture, warranty, stock;
	string model, manufacturer, country_of_origin;

	cout << endl << "Enter product code: ";
	cin >> product_code;

	while (ProductExists(product_code, type)) {
		cout << endl << "Enter another product code or enter 0 to cancel: ";
		cin >> product_code;
		if (product_code == 0) {
			cout << endl << "Operation cancelled." << endl << endl;
			return;
		}
	}

	cout << "Enter price: ";
	cin >> price;

	cout << "Enter model: ";
	cin.ignore();
	getline(cin, model);

	cout << "Enter year of manufacture: ";
	cin >> year_of_manufacture;

	cout << "Enter warranty: ";
	cin >> warranty;

	cout << "Enter manufacturer: ";
	cin.ignore();
	getline(cin, manufacturer);

	cout << "Enter country of origin: ";
	getline(cin, country_of_origin);

	cout << "Enter stock: ";
	cin >> stock;

	cout << endl;


	int componentIndex = -1;
	for (int i = 0; i < componentCount; i++) {
		if (components[i].type == type) {
			componentIndex = i;
			break;
		}
	}

	if (componentIndex == -1) {
		componentIndex = componentCount;
		componentCount++;
		components[componentIndex].type = type;
		components[componentIndex].product_count = 0;
	}

	int productIndex = components[componentIndex].product_count;

	components[componentIndex].product_count++;
	products[componentIndex][productIndex].product_code = product_code;
	products[componentIndex][productIndex].price = price;
	products[componentIndex][productIndex].model = model;
	products[componentIndex][productIndex].year_of_manufacture = year_of_manufacture;
	products[componentIndex][productIndex].warranty = warranty;
	products[componentIndex][productIndex].manufacturer = manufacturer;
	products[componentIndex][productIndex].country_of_origin = country_of_origin;
	products[componentIndex][productIndex].stock = stock;
}

// Function to delete the component category or a specific product
void DeleteEntry() {
	string type;

	cout << endl << "Enter component type: ";

	cin.ignore();
	getline(cin, type);

	int componentIndex = -1;
	for (int i = 0; i < componentCount; i++) {
		if (components[i].type == type) {
			componentIndex = i;
			break;
		}
	}
	if (componentIndex == -1) {
		cout << endl << "Component type not found." << endl;
		return;
	}

	cout << endl << "Do you want to delete the entire component category? (y/n): ";
	string choice;
	cin >> choice;

	if (choice == "y" || choice == "Y") {
		for (int i = componentIndex; i < componentCount - 1; i++) {
			components[i] = components[i + 1];
		}
		componentCount--;
		cout << endl << "Component category deleted successfully." << endl << endl;
		return;
	}

	cout << endl << "Enter product code: ";
	int product_code;
	cin >> product_code;

	for (int j = 0; j < components[componentIndex].product_count; j++) {
		if (products[componentIndex][j].product_code == product_code) {
			for (int k = j; k < components[componentIndex].product_count - 1; k++) {
				products[componentIndex][k] = products[componentIndex][k + 1];
			}
			components[componentIndex].product_count--;
			if (components[componentIndex].product_count == 0) {
				for (int k = componentIndex; k < componentCount - 1; k++) {
					components[k] = components[k + 1];
				}
				componentCount--;
			}
			cout << endl << "Product deleted successfully." << endl << endl;
			return;
		}
	}
	cout << endl << "Product not found in the specified component type." << endl;
}

// Function to sell a product
void SellProduct() {
	string type;

	cout << endl << "Enter component type: ";

	cin.ignore();
	getline(cin, type);

	int componentIndex = -1;
	for (int i = 0; i < componentCount; i++) {
		if (components[i].type == type) {
			componentIndex = i;
			break;
		}
	}

	if (componentIndex == -1) {
		cout << endl << "Component not found." << endl << endl;
		return;
	}

	cout << endl << "Enter product code: ";
	int product_code;
	cin >> product_code;

	int productIndex = -1;
	for (int i = 0; i < components[componentIndex].product_count; i++) {
		if (products[componentIndex][i].product_code == product_code) {
			productIndex = i;
			break;
		}
	}

	if (productIndex == -1) {
		cout << endl << "Product not found." << endl << endl;
		return;
	}

	cout << endl << "Enter quantity: ";
	int quantity;
	cin >> quantity;

	products[componentIndex][productIndex].stock -= quantity;
	if (products[componentIndex][productIndex].stock < 0) {
		cout << endl << "Stock cannot be negative." << endl;
		cout << "Do you want to delete the product (y/n)? ";
		char option;
		cin >> option;
		if (option == 'y' || option == 'Y') {
			DeleteEntry();
		}
		else {
			products[componentIndex][productIndex].stock = 0;
		}
	}
}

// Function to load stock
void LoadStock() {
	string type;

	cout << endl << "Enter component type: ";

	cin.ignore();
	getline(cin, type);

	int componentIndex = -1;
	for (int i = 0; i < componentCount; i++) {
		if (components[i].type == type) {
			componentIndex = i;
			break;
		}
	}

	if (componentIndex == -1) {
		cout << endl << "Component not found." << endl << endl;
		return;
	}

	cout << endl << "Enter product code: ";
	int product_code;
	cin >> product_code;

	int productIndex = -1;
	for (int i = 0; i < components[componentIndex].product_count; i++) {
		if (products[componentIndex][i].product_code == product_code) {
			productIndex = i;
			break;
		}
	}

	if (productIndex == -1) {
		cout << endl << "Product not found." << endl << endl;
		return;
	}

	cout << endl << "Enter quantity: ";
	int quantity;
	cin >> quantity;

	products[componentIndex][productIndex].stock += quantity;
}

// Function to calculate the total sum for a certain component category
void CalculateTotalSum() {
	string type;

	cout << endl << "Enter component type: ";

	cin.ignore();
	getline(cin, type);

	int totalSum = 0;
	for (int i = 0; i < componentCount; i++) {
		if (components[i].type == type) {
			for (int j = 0; j < components[i].product_count; j++) {
				totalSum += products[i][j].price * products[i][j].stock;
			}
			break;
		}
	}
	cout << endl << "Total sum: " << totalSum << " RON" << endl << endl;
}

// Function to display the details of a product searched by model
void DisplayPrice() {
	cout << endl << "Available models: " << endl;
	for (int i = 0; i < componentCount; i++) {
		for (int j = 0; j < components[i].product_count; j++) {
			cout << products[i][j].model << endl;
		}
	}

	string model;

	cout << endl << "Enter component type: ";

	cin.ignore();
	getline(cin, model);


	bool found = false;
	for (int i = 0; i < componentCount; i++) {
		for (int j = 0; j < components[i].product_count; j++) {
			if (products[i][j].model == model) {
				cout << "The price of the product with model '" << model << "' is " << products[i][j].price << " RON." << endl;
				found = true;
				break;
			}
		}
	}
	if (!found) {
		cout << "No product found with model '" << model << "'" << endl;
	}
}

void SortData() {
	// Sort components based on type in alphabetical order
	for (int i = 0; i < componentCount - 1; i++) {
		for (int j = 0; j < componentCount - 1 - i; j++) {
			if (components[j].type > components[j + 1].type) {
				Component temp = components[j];
				components[j] = components[j + 1];
				components[j + 1] = temp;
			}
		}
	}

	// Sort products based on product_code in ascending order
	for (int i = 0; i < componentCount; i++) {
		for (int j = 0; j < components[i].product_count - 1; j++) {
			for (int k = 0; k < components[i].product_count - 1 - j; k++) {
				if (products[i][k].product_code > products[i][k + 1].product_code) {
					Product temp = products[i][k];
					products[i][k] = products[i][k + 1];
					products[i][k + 1] = temp;
				}
			}
		}
	}
}

// Function to save the latest modified data of hardware components of the store
void SaveToFile() {
	cout << "Enter file name: ";
	string fileName;
	cin >> fileName;

	SortData();

	ofstream file(fileName);
	if (file.is_open()) {
		for (int i = 0; i < componentCount; i++) {
			for (int j = 0; j < components[i].product_count; j++) {
				file << components[i].type << "," << products[i][j].product_code << "," << products[i][j].price << "," << products[i][j].model << "," << products[i][j].year_of_manufacture << "," << products[i][j].warranty << "," << products[i][j].manufacturer << "," << products[i][j].country_of_origin << "," << products[i][j].stock << endl;
			}
		}
		file.close();
	}
	else {
		cout << "Unable to open file " << fileName << endl << endl;
	}
}

// Function to output the latest modified data of hardware components of the store
void OutputToConsole() {
	SortData();

	cout << endl;
	cout << left << setw(11) << "Component";
	cout << setw(15) << "Product code";
	cout << setw(7) << "Price";
	cout << setw(22) << "Model";
	cout << setw(22) << "Year of manufacture";
	cout << setw(13) << "Warranty";
	cout << setw(15) << "Manufacturer";
	cout << setw(9) << "Country";
	cout << setw(5) << "Stock" << endl;

	for (int i = 0; i < componentCount; i++) {
		for (int j = 0; j < components[i].product_count; j++) {
			cout << left << setw(11) << components[i].type;
			cout << setw(15) << products[i][j].product_code;
			cout << setw(7) << products[i][j].price;
			cout << setw(22) << products[i][j].model;
			cout << setw(22) << products[i][j].year_of_manufacture;
			cout << setw(13) << products[i][j].warranty;
			cout << setw(15) << products[i][j].manufacturer;
			cout << setw(9) << products[i][j].country_of_origin;
			cout << setw(5) << products[i][j].stock << endl;
		}

		// Put a line between component categories
		cout << setfill('-') << setw(119) << "" << setfill(' ') << endl;
	}

	cout << endl;
}

// Main function
int main() {
	while (true) {
		cout << "1. Load from file the hardware components of store" << endl;
		cout << "2. Add a new product to a specific component" << endl;
		cout << "3. Sell a product" << endl;
		cout << "4. Delete entire component category or specific product" << endl;
		cout << "5. Load the stock of a product" << endl;
		cout << "6. Calculate the total sum for a certain component category" << endl;
		cout << "7. Display price for certain products searched by model" << endl;
		cout << "8. Output the latest store data" << endl;
		cout << "9. Exit" << endl;
		cout << endl;
		cout << "Enter your choice: ";

		int choice;
		cin >> choice;

		switch (choice) {
		case 1: {
			LoadFromFile();
			break;
		}
		case 2: {
			AddNewProduct();
			break;
		}
		case 3: {
			SellProduct();
			break;
		}
		case 4: {
			DeleteEntry();
			break;
		}
		case 5: {
			LoadStock();
			break;
		}
		case 6: {
			CalculateTotalSum();
			break;
		}
		case 7: {
			DisplayPrice();
			break;
		}
		case 8: {
			cout << endl;
			cout << "1. Save to file" << endl;
			cout << "2. Output in console" << endl;
			cout << endl;
			cout << "Enter your choice: ";

			int choice;
			cin >> choice;

			switch (choice) {
			case 1: {
				SaveToFile();
				break;
			}
			case 2: {
				OutputToConsole();
				break;
			}
			default: {
				cout << "Invalid choice" << endl;
				break;
			}
			}
			break;
		}
		case 9: {
			return 0;
		}
		default: {
			cout << "Invalid choice" << endl;
			break;
		}
		}
	}
}