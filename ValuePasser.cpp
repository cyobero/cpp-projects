#include <iostream> 

using namespace std; 

void swap(int x, int y);

int main() {
	int x = 5, y = 10; 

	cout << "Main. Pre-swap, x: " << x << "\t\ty: " << y; 

	swap(x, y);

	cout << "Main. Post-swap, x: " << x << "\t\ty: " << y;

	return 0;
}

void swap(int x, int y) {
	int temp; 

	cout << "Swap. Before swap, x: " << x << "\t\ty: " << y << endl;

	temp = x;
	x = y;
	y = temp;

	cout << "Swap. After swap, x: " << x << "\t\ty: " << y << endl;
}
