#include <iostream>

using namespace std; 

class Rectangle {
	public:
		Rectangle();
		~Rectangle();
		void setLength(int length) { itsLength = length; }
		int getLength() const { return itsLength; }

		void setWidth(int width) { itsWidth = width; }
		int getWidth() const { return itsWidth; }
	private:
		int itsLength;
		int itsWidth;
};

Rectangle::Rectangle():
itsWidth(5),
itsLength(10)
{}

Rectangle::~Rectangle()
{}

int main() {
	Rectangle *pRect = new Rectangle;
	const Rectangle *pConstRect = new Rectangle;
	Rectangle * const pConstPtr = new Rectangle;
}
