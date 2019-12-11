#include <iostream>

using namespace std;

class Rectangle {
	public:
		Rectangle();
		~Rectangle();
		void setLength(int length) { this->length = length; }
		int getLength() const { return this->length; }
		void setWidth(int width) { this->width = width; }
		int getWidth() const { return this->width; }
	private:
		int length;
		int width;
};

Rectangle::Rectangle() {
	width = 5;
	length = 13;
}

Rectangle::~Rectangle() {}

int main() {
	Rectangle rect;

	cout << "rectangle is " << rect.getLength() << " feet long.\n";
	cout << "rectangle is " << rect.getWidth() << " feet long.\n\n";

	rect.setLength(15);
	rect.setWidth(21);

	cout << "rectangle is now " << rect.getLength() << " feet long.\n";
	cout << "rectangle is now " << rect.getWidth() << " feet long.\n";

	return 0;
}
