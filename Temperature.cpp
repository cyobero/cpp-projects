#include <iostream>

using namespace std; 

float convert(float fahrenheit);

int main() {
		float fahrenheit;
		float celsius; 

		cout << "Enter temperature in fahrenheit: ";
		cin >> fahrenheit; 
		celsius = convert(fahrenheit);
		cout << "\nThe temperature in celsius is " << celsius << " degrees.";
		return 0;
}

float convert(float fahrenheit) {
		float celsius; 
		celsius = ((fahrenheit - 32) * 5) / 9;
		return celsius; 
}
