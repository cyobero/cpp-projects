// calculates the area and perimiter of your yard
#include <iostream>

using namespace std; 

int findArea(int length, int width);	// function prototype

int main() {
	int length;
	int width; 
	int area;

	cout << "\nHow wide is your yard? ";
	cin >> width;
	cout << "\nHow long is your yard? ";
	cin >> length;

	area = findArea(length, width);

	cout << "The area of your yard is " << area << " square feet.\n\n";
	return 0;
		
}	

// function definition 
int findArea(int l, int w)
{
	return l * w; 
}
