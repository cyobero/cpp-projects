#include <iostream>

using namespace std;

class SimpleCat {
	public:
		SimpleCat();
		SimpleCat(SimpleCat&);
		~SimpleCat();

		int getAge() const { return age; }
		void setAge(int age) { this->age = age; }
	private:
		int age;
};

SimpleCat::SimpleCat() {
	cout << "Simple Cat Constructor..." << endl;
	age = 1;
}

SimpleCat::SimpleCat(SimpleCat&) {
	cout << "Simple Cat Copy Constructor ... " << endl;
}

SimpleCat::~SimpleCat() {
	cout << "Simple Cat Descructor ... " << endl;
}

const SimpleCat &functionTwo(const SimpleCat &theCat);

int main() {
	cout << "Making a cat ..." << endl;
	SimpleCat Garfield;
	cout << "Garfield is " << Garfield.getAge() << " years old.\n";

	int age = 7;
	Garfield.setAge(age);

	cout << "Garfield is now " << Garfield.getAge() << " years old.";

	cout << "Calling functionTwo ... " << endl;
	functionTwo(Garfield);
	cout << "Garfield is " << Garfield.getAge() << " years old." << endl;

	return 0;
}
// functionTwo passes a ref to a const object
const SimpleCat &functionTwo(const SimpleCat &theCat) {
	cout << "Function Two. Returning ..." << endl;
	cout << "Cat is now " << theCat.getAge() << " years old." << endl;

	return theCat;
}
