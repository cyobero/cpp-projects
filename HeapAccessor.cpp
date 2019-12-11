#include <iostream>

using namespace std; 

class SimpleCat {
	public:
		SimpleCat() { age = 2; }
		~SimpleCat() {}
		int getAge() const { return age; }
		void setAge(int age) { this->age = age; }
	private:
		int age;
};


int main() {
	SimpleCat *garfield = new SimpleCat;
	cout << "Garfield is " << garfield->getAge() << " years old." << endl;

	garfield->setAge(5);

	cout << "Garfield is now " << garfield->getAge() << " years old" << endl;

	delete garfield;

	return 0;
}
