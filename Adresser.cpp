#include <iostream>

using namespace std;

int main() {
		unsigned short shortVar = 5;
		unsigned long longVar = 65535;
		long sVar = -65535;

		cout << "shortvar:\t" << shortVar << endl;
		cout << "address of shortvar:\t" << &shortVar << endl;
		cout << "longvar:\t" << longVar << endl;
		cout << "address of longvar:\t" << &longVar;
		cout << "svar:\t" << sVar << endl;
		cout << "address of svar: " << &sVar << endl;

		return 0;
}
