#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
const int MAXLAPTOPS = 5;
double price[MAXLAPTOPS] = { 350.0, 750.0, 1200.0, 499.0, 999.0 };
int serial[MAXLAPTOPS] = { 1234, 5678, 9101, 1121, 3141 };

struct Laptop {
	int serial;
	double price;
	double discount;
};

struct Phone {
	double price;
	string warranty_type;
	double warranty_price;
};

static double calculate_discount(double price) {
	if (price > 1000) {
		return 200.0;
	}
	else if (price < 500) {
		return 50.0;
	}
	else {
		return 100.0;
	}
}

static void sample_one() {
	cout << setw(15) << left << "Serial Number";
	cout << setw(15) << left << "Basic Price";
	double discount;
	cout << "Price After Discount\n";
	for (int i = 0; i< MAXLAPTOPS; i++) {
		cout << setw(15) << left << setprecision(2) << fixed << serial[i];
		cout << char(156) << setw(15) << left << setprecision(2) << fixed  << price[i];
		if (price[i] > 1000) {
			discount = 200.0;
		}
		else if (price[i] < 500) {
			discount = 50.0;
		}
		else {
			discount = 100.0;
		}
		cout << char(156) << setprecision(2) << fixed  << price[i] - discount << endl;
	}
	Laptop laptops[MAXLAPTOPS]{};

	for (int i = 0; i< MAXLAPTOPS; i++) {
		laptops[i].serial = serial[i];
		laptops[i].price = price[i];
		laptops[i].discount = calculate_discount(price[i]);
	}
	cout << setw(15) << left << "Serial Number";
	cout << setw(15) << left << "Basic Price";
	cout << "Price After Discount\n";
	Laptop highest_price_laptop{};
	for (auto l : laptops) {
		cout << setw(15) << left << setprecision(2) << fixed << l.serial;
		cout << char(156) << setw(15) << left << setprecision(2) << fixed << l.price;
		cout << char(156) << setprecision(2) << fixed << l.price -l.discount << endl;
		highest_price_laptop = (l.price > highest_price_laptop.price) ? l : highest_price_laptop;
	}
	cout << "The highest price laptop is Serial Number " << highest_price_laptop.serial << " with the price of " << char(156) << highest_price_laptop.price << endl;
}

const int NUMPHONES = 5;
double phone_price[NUMPHONES] = { 699.99, 849.99, 499.99, 999.99, 749.99 };
int warranty[NUMPHONES] = { 0, 1, 2, 1, 0 };

static double calculate_warranty_cost(string warranty_type) {
}

static void sample_two() {
	cout << setw(15) << left << "Price";
	cout << setw(15) << left << "Warranty Type";
	cout << "Total Price\n";
	string warranty_type;
	double warranty_price = 0.0;
	for (int i = 0; i < NUMPHONES; i++) {
		warranty_type = (warranty[i] == 0) ? "Standard" : (warranty[i] == 1) ? "Extended" : "Premium";
		warranty_price = (warranty[i] == 0) ? 0 : (warranty[i] == 1) ? 50 : 100;
		cout << char(156) << setw(15) << left << setprecision(2) << fixed << phone_price[i];
		cout << setw(15) << left << setprecision(2) << fixed << warranty_type;
		cout << char(156) << setprecision(2) << fixed << phone_price[i] + warranty_price << endl;
	}
	Phone phones[NUMPHONES]{};
	for (int i = 0; i < NUMPHONES; i++) {
		phones[i].price = phone_price[i];
		phones[i].warranty_type = (warranty[i] == 0) ? "Standard" : (warranty[i] == 1) ? "Extended" : "Premium";
		phones[i].warranty_price = (warranty[i] == 0) ? 0 : (warranty[i] == 1) ? 50 : 100;
	}
	cout << setw(15) << left << "Price";
	cout << setw(15) << left << "Warranty Type";
	cout << "Total Price\n";
	double sum_price = 0.0;
	for (auto p : phones) {
		cout << char(156) << setw(15) << left << setprecision(2) << fixed << p.price;
		cout << setw(15) << left << setprecision(2) << fixed << p.warranty_type;
		cout << char(156) << setprecision(2) << fixed << p.price + p.warranty_price << endl;
		sum_price += p.price + p.warranty_price;
	}
	cout << "The total cost of all smartphones is: "<< char(156) << sum_price << endl;
}


void lab_four() {
	//sample_one();
	sample_two();
}