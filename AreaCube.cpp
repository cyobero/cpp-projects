#include <iostream>

using namespace std; 

// function prototype with default params
float findArea(float length, float width = 20.0, float height = 10.0);

int main() {
		float length = 100;
		float width = 50; 
		float height = 2; 
		float area; 

		area = findArea(length, width, height);
		cout << "First area: " << area << "\n\n";

		area = findArea(length, width); 
		cout << "Second area (length and width provided): " << area << "\n\n";

		area = findArea(length);
		cout << "Third area (only length provided):" << area << "\n\n";

		return 0;
}

float findArea(float length, float width, float height) {
		return (length * width * height);
}
