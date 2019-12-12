#include <iostream>

class Mammal {
	public:
		Mammal():age(1) {}
		~Mammal() {}
		virtual void speak() const { std::cout << "Mammal speak\n"; }
	protected:
		int age;
};

class Dog : public Mammal {
	public:
		void speak() const { std::cout << "Woof!\n"; }
};

class Cat : public Mammal {
	public:
		void speak() const { std::cout << "Meow...\n"; }
};

class Cow : public Mammal {
	public:
		void speak() const { std::cout << "Moooo!\n"; }
};

class Pig : public Mammal {
	public:
		void speak() const { std::cout << "Oink oink :)\n"; }
};

int main() {
	Mammal* array[5];
	Mammal* ptr;
	int choice;

	for (int i = 0; i < 5; i++) {
		std::cout << "(1) dog (2) cat (3) cow (4) pig";
		std::cin >> choice; 
		switch(choice) {
			case 1:
				ptr = new Dog; 
				break;
			case 2:
				ptr = new Cat;
				break;
			case 3:
				ptr = new Cow;
				break;
			case 4:
				ptr = new Pig;
				break;
			default:
				ptr = new Mammal;
				break;
		}
		array[i] = ptr; 
	}
	for (int i = 0; i < 5; i++) {
		array[i]->speak();
	}
	return 0;
}
