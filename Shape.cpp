#include <iostream>

class Shape {
	public:
		Shape() {}
		virtual ~Shape() {}
		virtual long getArea() { return -1; }
		virtual long getPerimeter() { return -1; }
		virtual void draw() {}
};

class Circle : public Shape {
	public:
		Circle(int newRadius):radius(newRadius) {}
		~Circle();
		long getArea() { return 3.14159 * radius * radius; }
		long getPerimeter() { return 2 * 3.14159 * radius; }
		void draw();
	private:
		int radius;
		int circumference;
};

void Circle::draw() {
	std::cout << "Circle drawing routine here!\n";
}
