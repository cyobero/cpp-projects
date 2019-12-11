// what's in the box!?!?!?
#include <iostream>

using namespace std; 

int main() {
		int box[2][2] = {5, 10, 21, 4};
		
		for (int i = 0; i < 2; i++) {
				for (int j = 0; j < 2; j++) {
						cout << "box[" << i << "] = ";
						cout << "[" << j << "] = ";
						cout << box[i][j] << "\n\n";
				}
		}
}


