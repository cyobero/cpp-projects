#include <iostream>

using namespace std;

short factor(int, int*, int*);

int main() {
	int number, squared, cubed;
	short error; 

	cout << "Enter a number (0 - 20): "; 
	cin >> number; 

	error = factor(number, &squared, &cubed);

	if (!error) {
		cout << "number: " << number << "\n"; 
		cout << "square: " << squared << "\n";
		cout << "cubed: " << cubed << "\n";
	} else {
		cout << "error! error! femputer does not fempute!\n";
	}  

	return 0;

} 

short factor(int n, int *pSquared, int *pCubed) {
	short value = 0; 
	if (n > 20) {
		value = 1;
	} else {
		*pSquared = n * n;
		*pCubed = n*n*n;
		value = 0;
	}
	return value; 

}
