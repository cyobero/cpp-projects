#include <iostream>

using namespace std;

int main() {
	int intOne;
	int &someRef = intOne; 

	intOne = 5; 
	cout << "intOne: " << intOne << endl;
	cout << "someRef: " << someRef << endl;

	someRef = 7;

	cout << "someRef: " << someRef << endl;
	cout << "intOne: " << intOne << endl;

	return 0;
}
