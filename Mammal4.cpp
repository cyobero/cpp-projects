#include <iostream>

using namespace std;

enum BREED { YORKIE, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB };

class Mammal {
  public:
    Mammal();
	  Mammal(int age);
    ~Mammal();	

		int getAge() const { return age; }
		int getWeight() const { return weight; }
		void setAge(int a) { age = a;}
		void setWeight(int w) { weight = w; }

		void speak() const { cout << "Mammal sound...\n"; }
		void sleep() const { cout << "ZzZzzZzZZzZ...\n"; }
	protected:
		int age;
		int weight;
};


class Dog : public Mammal {
	public:
		Dog();
		Dog(int age);
		Dog(int age, int weight);
		Dog(int age, BREED breed);
		Dog(int age, int weight, BREED breed); 
		~Dog();

		BREED getBreed() { return breed; }
		void setBreed(BREED b) { breed = b; }

		void speak() { cout << "Argf argf!!\n"; }
		void paw() { cout << "Extending paw...\n"; }
		void wagTail() { cout << "Wagging tail...\n"; }
	private:
		BREED breed;
};


Mammal::Mammal(): age(3), weight(5) {
	cout << "Mammal() constructor...\n";
}

Mammal::Mammal(int age): age(age), weight(5) {
	cout << "Mammal(int) constructor...\n";
}

Mammal::~Mammal() {
	cout << "Mammal destructor...\n";
}

Dog::Dog():Mammal(), breed(YORKIE) {
	cout << "Dog constructor...\n";
}

Dog::Dog(int age): Mammal(age), breed(YORKIE) {
	cout << "Dog (int) constructor...\n";
}

Dog::Dog(int age, int weight): Mammal(age), breed(YORKIE) {
	this->weight = weight;
	cout << "Dog (int, int) constructor...\n";
}

Dog::Dog(int age, int weight, BREED breed): Mammal(age), breed(YORKIE) {
	this->weight = weight;
	cout << "Dog (int, int, BREED) constructor...\n";
}

Dog::Dog(int age, BREED breed): Mammal(age), breed(breed) {
	cout << "Dog (int, BREED) constructor...\n";
}

Dog::~Dog() {
	cout << "Dog destroyed...\n";
}


int main() {
	Dog fido; 
	Dog lisa(5); 
	Dog bart(5, 8);
	Dog dexter(5, 8, YORKIE);
	Dog steve(4, 20, DOBERMAN);
	
	fido.speak();
	lisa.wagTail();
	cout << "Dexter is " << dexter.getAge() << " years old.\n"; 
	cout << "Bart weighs " << bart.getWeight() << " lbs.\n";
}
