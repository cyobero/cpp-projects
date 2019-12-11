#include <iostream>

using namespace std; 

class Tricycle {
	public:
		Tricycle();
		Tricycle(const Tricycle&);
		~Tricycle();
		int getSpeed() const { return *speed; }
		void setSpeed(int newSpeed) { *speed = newSpeed; }
		void pedal();
		void brake();
	private:
		int *speed;
};

Tricycle::Tricycle() {
	speed = new int; 
	*speed = 5;
}

Tricycle::Tricycle(const Tricycle& rhs) {
	speed = new int; 
	*speed = rhs.getSpeed();
}

Tricycle::~Tricycle() {
	delete speed;
	speed = NULL;
}

void Tricycle::pedal() {
	setSpeed(*speed + 1);
	cout << "\nPedaling " << getSpeed() << " mph" << endl;
}

void Tricycle::brake() {
	setSpeed(*speed - 1);
	cout << "\nPedaling " << getSpeed() << " mph" << endl;
}

int main() {
	cout << "Creating trike named wichita ...";
	Tricycle wichita;
	wichita.pedal();

	cout << "Creating trike named dallas ..." << endl;
	Tricycle dallas(wichita);

	cout << "whichita's speed: " << wichita.getSpeed() << endl;
	cout << "dallas's speed: " << dallas.getSpeed() << endl;
	cout << "setting wichita to 10 ..." << endl; 

	wichita.setSpeed(10);

	cout << "whichita's speed: " << wichita.getSpeed() << endl;
	cout << "dallas's speed: " << dallas.getSpeed() << endl;

	return 0;
}
