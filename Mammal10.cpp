#include <iostream>

class Mammal {
	public:
		Mammal():age(1) {}
		~Mammal() {}
		virtual void speak() const { std::cout << "Mammal speak!\n"; }
	protected:
		int age;
};

class Dog : public Mammal {
	public:
		void speak() const { std::cout << "Woof!\n"; }
};
