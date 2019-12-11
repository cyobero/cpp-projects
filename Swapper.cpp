#include <iostream>

using namespace std;

int main() {
	int value1 = 12500;
	int value2 = 1700;
	int *pPointer = nullptr;

	// give pointer address of value2
	pPointer = &value2;

	// deference the pointer and assign to value1
	value1 = *pPointer; 
	pPointer = 0;

	cout << "value1 = " << value1 << "\n";

	return 0;
}
