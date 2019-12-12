#include <iostream>

using namespace std; 

enum BREED { kYorkie, kCairn, kDandie, kShetland, kDoberman, kLab };

class Mammal {
	public:
		Mammal() { cout << "Mammal() constructor...\n"; }
		~Mammal() { cout << "Mammal destructor...\n"; }

		void speak() const { cout << "Mammal sound...\n"; }
		void sleep() const { cout << "zZzzZZzzZZzZ...\n"; }
	protected:
			int age;
			int weight;
};


class Dog : public Mammal {
	public:
		Dog() { cout << "Dog constructor...\n"; }
		~Dog() { cout << "Dog destructor...\n"; }

		void setBreed(BREED breed) { this->breed = breed; }
		BREED getBreed() { return breed; }

		void wagTail() { cout << "Wagging tail...\n"; }
		void begForFood() { cout << "Begging for food...\n"; }
		void speak() const { cout << "Woof\n"; }		// overrides function from Mammal
	private:
		BREED breed;
};


int main() {
	Mammal bigMammaJamma;
	Dog lisa; 
	bigMammaJamma.speak();
	lisa.speak();
	return 0;
}
