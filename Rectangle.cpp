#include "Rectangle.hpp"

using namespace std;

Rectangle::Rectangle(int top, int left, int bottom, int right) {
		this->top = top;
		this->left = left;
		this->bottom = bottom;
		this->right = right;

		upperLeft.setX(left);
		upperLeft.setY(top);

		upperRight.setX(right);
		upperRight.setY(top);

		lowerLeft.setX(left);
		lowerLeft.setY(bottom);
}

Rectangle::~Rectangle() {
		cout << "Rectangle destructed" << endl;
}

void Rectangle::setUpperLeft(Point location) {
		upperLeft = location;
		upperRight.setY(location.getY());
		lowerLeft.setX(location.getX());
		top = location.getY();
		left = location.getX();
}

void Rectangle::setLowerLeft(Point location) {
		lowerLeft = location; 
		lowerRight.setY(location.getY());
		upperLeft.setX(location.getX());
		bottom = location.getY();
		left = location.getX();
}

void Rectangle::setLowerRight(Point location) {
		lowerRight = location;
		lowerLeft.setY(location.getY());
		upperRight.setX(location.getX());
		bottom = location.getY();
		right = location.getX();
}

void Rectangle::setUpperRight(Point location) {
		upperRight = location;
		upperLeft.setY(location.getY());
		lowerRight.setX(location.getX());
		top = location.getY();
		right = location.getX();
}

void Rectangle::setTop(int top) {
		this->top = top;
		upperLeft.setY(top);
		upperRight.setY(top);
}

void Rectangle::setLeft(int left) {
		this->left = left;
		upperLeft.setX(left);
		lowerLeft.setX(left);
}

void Rectangle::setRight(int right) {
		this->right = right; 
		upperRight.setX(right);
		lowerRight.setX(right);
}

int Rectangle::getArea() const {
		int width = right - left; 
		int height = top - bottom;
		return (width * height);
}

// compute area of rectangle by finding corners.
// establish width and height and multiply

int main() {
		// initialize local Rectangle variable
		Rectangle myRectangle(100, 20, 50, 80);

		int area = myRectangle.getArea();

		cout << "area: " << area << endl;

		return 0;

}
