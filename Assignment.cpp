#include <iostream>

using namespace std;

int main() {
	int intOne; 
	int &rMyRef = intOne; 

	intOne = 5;
	cout << "intOne:\t" << intOne << endl;
	cout << "rMyRef:\t" << rMyRef << endl;
	cout << "&intOne:\t" << &intOne << endl;
	cout << "&rMyRef:\t" << &rMyRef << endl;

	int intTwo = 8; 

	rMyRef = intTwo;

	cout << "rMyRef:\t" << rMyRef << endl;	
}
