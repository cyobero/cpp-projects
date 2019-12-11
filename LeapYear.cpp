#include <iostream>

using namespace std; 

bool isLeapYear(int year);

int main() {
		int input; 
		cout << "Enter a year: ";
		cin >> input; 
		if (isLeapYear(input))
				cout << input << " is a leap year\n";
		else
				cout << input << " is not a leap year\n";
		return 0;
}

bool isLeapYear(int year) {
		if (year % 4 == 0) {
				if (year % 100 == 0) {
						if (year % 400 == 0) return true;
						else return false;
				} else return true; 
		} else return false; 
}
