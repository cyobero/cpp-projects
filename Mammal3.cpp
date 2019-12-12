#include <iostream>

using namespace std; 

enum BREED { YORKIE, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB };

class Mammal {
	public:
		Mammal();
		~Mammal();

		int getAge() const { return age; }
		int getWeight() const { return weight; }
		void setAge(int age) { this->age = age; }
		void setWeight(int weight) { this->weight = weight; }

		void speak() const { cout << "Mammal sound...\n"; }
		void sleep() const { cout << "I's going to bed now...ZzZZzzzZzZ...\n"; }	
	private:
		int age;
		int weight;
};


class Dog : public Mammal {
	public:
		Dog();
		~Dog();

		BREED getBreed() const { return breed; }
		void setBreed(BREED breed) { this->breed = breed; }

		void wagTail() { cout << "Wagging tail...\n"; }
		void begForFood() { cout << "Begging for food...\n"; }
	private:
		BREED breed;
};


Mammal::Mammal(): age(3), weight(5) {
	cout << "Mammal constructor\n";
}

Mammal::~Mammal() {
	cout << "Mammal destructor";
}

Dog::Dog():breed(YORKIE) {
	cout << "Dog constructor...\n";
}

Dog::~Dog() {
	cout << "Dog desctructor...\n";
}

																					
int main() {
	Dog lisa;
	lisa.speak();
	lisa.wagTail();
	cout << "Lisa is " << lisa.getAge() << " years old\n";
	return 0;
}
