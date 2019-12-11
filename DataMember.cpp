#include <iostream>

using namespace std;

class SimpleCat {
	public:
		SimpleCat();
		~SimpleCat();
		int getAge() { return *age; }
		void setAge(int age) { this->age = &age; }

		int getWeight() const { return *weight; }
		void setWeight(int weight) { this->weight = &weight; }
	private:
		int *age;
		int *weight;
};

SimpleCat::SimpleCat() {
	age = new int(2);
	weight = new int(5);
}

SimpleCat::~SimpleCat() {
	delete age;
	delete weight;
}

int main() {
	SimpleCat *garfield = new SimpleCat;
	cout << "Garfield is " << garfield->getAge() << " years old.";

	garfield->setAge(5);
	garfield->setWeight(10);
	cout << "Garfield is now " << garfield->getAge() << " years old.";
	
	delete garfield;

	return 0;
}
