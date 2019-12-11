// demonstrates global variables
#include <iostream>

using namespace std;

void convert();

// global variables
float fahrenheit; 
float celsius;

int main() {
		cout << "Enter the temperature in Fahrenheit: ";
		cin >> fahrenheit; 
		convert();
		cout << "\nThe temperature in celsius is " << celsius << " degrees";
		return 0;
}

void convert() {
		celsius = ((fahrenheit - 32) * 5) / 9;
}
