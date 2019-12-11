#include <iostream>

using namespace std; 

class Point {
		public:
				void setX(int x) { this->x = x; }
				void setY(int y) { this->y = y; }
				int getX() { return x; }
				int getY() { return y; }
		private:
				int x;
				int y; 
};

class Rectangle {
		public:
				Rectangle(int top, int left, int bottom, int right);
				~Rectangle();
				int getTop() const { return top; }
				int getLeft() const { return left; }
				int getBottom() const { return bottom; }
				int getRight() const { return right; }

				Point getUpperLeft() const { return upperLeft; }
				Point getLowerLeft() const { return lowerLeft; }
				Point getUpperRight() const { return upperRight; }
				Point getLowerRight() const { return lowerRight; }

				void setUpperLeft(Point location);
				void setLowerLeft(Point location);
				void setUpperRight(Point location);
				void setLowerRight(Point location);
				
				void setTop(int top);
				void setLeft(int left);
				void setBottom(int bottom);
				void setRight(int right);

				int getArea() const;
		private:
				Point upperLeft; 
				Point upperRight;
				Point lowerLeft;
				Point lowerRight;
				int top;
				int left;
				int bottom;
				int right;
};
