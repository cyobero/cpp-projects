#include <iostream>

using namespace std;

class Rectangle {
	public:
		Rectangle(int width, int height);
		~Rectangle() {}
		void drawShape(int aWidth, int aHeight, bool useCurrentValue = false) const;
	private:
		int width;
		int height;
};

Rectangle::Rectangle(int aWidth, int aHeight) {
	width = aWidth;
	height = aHeight;
}

void Rectangle::drawShape(int aWidth, int aHeight, bool useCurrentValue) const {
	int printWidth;
	int printHeight; 

	if (useCurrentValue == true) {
		printWidth = width; 
		printHeight = height;
	} else {
		printWidth = aWidth;
		printHeight = aHeight;
	}

	for (int i = 0; i < printHeight; i++) {
			for (int j = 0; j < printWidth; j++) {
				cout << "*";
			}
			cout << endl;
		}
}

int main() {
	Rectangle box(20, 5); 
	cout << "drawShape(0, 0, true) ..." << endl;
	box.drawShape(0, 0, true); 
	cout << "drawShape(25, 4) ...";
	box.drawShape(25, 4);

	return 0;
}
