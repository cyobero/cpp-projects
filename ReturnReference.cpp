#include <iostream>

using namespace std;

enum ERR_CODE { SUCCESS, ERROR };

ERR_CODE factor(int, int&, int&);

int main() {
	int number, squared, cubed; 
	ERR_CODE result;

	cout << "Enter a number (0 - 20): "; 
	cin >> number;

	result = factor(number, squared, cubed);

	if (result == SUCCESS) {
		cout << "number: " << number << "\n";
		cout << "square: " << squared << "\n";
		cout << "cubed: " << cubed << "\n";
	} else {
		cout << "error encountered!!\n";
	}
	return 0; 
}

ERR_CODE factor(int n, int &rSquared, int &rCubed) {
		if (n > 20) {
			return ERROR;
		} else {
			rSquared = n * n; 
			rCubed = n * n * n;
			return SUCCESS;
		}
}
