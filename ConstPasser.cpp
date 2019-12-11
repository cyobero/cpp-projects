/* Passing a const Pointer
 * In order to provide the security of pass by value
 * with the efficiency of pass by reference, you could
 * pass a const pointer. Doing so prevents calling any non-constant
 * member function.
 */
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
	cout << "Simple Cat constructor..." << endl;
	age = 1;
}

SimpleCat::SimpleCat(SimpleCat&) {
	cout << "Simple Cat Copy Constructor ... " << endl;
}

SimpleCat::~SimpleCat() {
	cout << "Simple cat destructo disk ..." << endl;
}

const SimpleCat *const FunctionTwo (const SimpleCat *const theCat);

int main() {
	cout << "Making a cat ..." << endl;
	SimpleCat Frisky;
	cout << "Frisky is " << Frisky.getAge() << " years old." << endl;
	int age = 5;

	Frisky.setAge(age);

	cout << "Frisky is " << Frisky.getAge() << " years old.";
	cout << "Calling function two..." << endl;

	FunctionTwo(&Frisky);
	cout << "Frisky is ";
	cout << Frisky.getAge() << " years old" << endl;

	return 0;
}

// functionTwo passes a const pointer
const SimpleCat *const FunctionTwo (const SimpleCat *const theCat) {
	cout << "Function two. Returning ..." << endl;
	cout << "Frisky is now " << theCat->getAge(); 
	cout << " years old\n";
	// theCat->setAge(8) const;
	return theCat;
}
