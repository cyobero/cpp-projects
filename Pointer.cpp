#include <iostream>

using namespace std;

int main() {
		int myAge;					// a variable
		int *pAge = nullptr;		// a pointer 

		myAge = 5;
		pAge = &myAge; 				// assigne address of myAge to pAge
		cout << "myAge: " << myAge << "\n";
		cout << "*pAge: " << *pAge << "\n\n";

		cout << "*pAge = 7\n";
		*pAge = 7;					// sets pAge to 7
		cout << "*pAge: " << *pAge << "\n";
		cout << "myAge: " << myAge << "\n\n";

		cout << "myAge = 9\n";
		myAge = 9;
		cout << "myAge: " << myAge << "\n";
		cout << "*pAge: " << *pAge << "\n\n";

		return 0;
}
