#include <iostream>

using namespace std; 

class Counter {
	public:
		Counter();
		~Counter() {}
		int getValue() const { return value; }
		void setValue(int x) { value = x; }
		const Counter& operator++();		// prefix
		const Counter operator++(int);		// postfix
	private:
		int value;
};

Counter::Counter():value(0){}

const Counter& Counter::operator++() {
	++value;
	return *this;
}

const Counter Counter::operator++(int) {
	Counter temp(*this);
	++value;
	return temp;
}

int main() {
	Counter c; 
	cout << "The value of c is " << c.getValue() << endl;
	
	c++;
	cout << "The value of c is " << c.getValue() << endl;
	
	++c;
	cout << "The value of c is " << c.getValue() << endl;

	Counter a = ++c;
	cout << "The value of a is " << a.getValue(); 
	cout << " and the value of c is " << c.getValue() << endl;
	a = c++;
	cout << "The value of a is " << a.getValue();
	cout << " and the value of c is " << c.getValue() << "\n\n";

	return 0;
}
