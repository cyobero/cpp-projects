#include <iostream>

using namespace std;

// get an approximate value of pi
const double getPi() {
	return (double) 22 / 7;
}

int main() {
	float radius; 

	cout << "Enter the radius of the circle: "; 
	cin >> radius; 

	// area equals pi * radius * radius
	double area = getPi() * (radius * radius);

	cout << "\nCircle's area: " << area << endl;

	return 0;
}
