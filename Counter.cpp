#include <iostream>

using namespace std;

class Counter {
	public:
		Counter();
		~Counter(){}
		int getValue() const { return value; }
		void setValue(int x) { value = x; }
	
	private:
		int value;
};

Counter::Counter():
value(0)
{}

int main() {
	Counter c;
	cout << "Value of c is " << c.getValue() << endl;
	return 0;
}
