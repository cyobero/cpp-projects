#include <iostream>

using namespace std;

class Tricycle {
		public:
				Tricycle(int age, int speed);
				~Tricycle();
				int getSpeed();
				void setSpeed(int speed);
				void setAge(int age);
				int getAge();
				void pedal();
				void brake();
		private:
				int speed; 
				int age;
};

// constructor for Tricycle
Tricycle::Tricycle(int age, int speed) {
	this->age = age;
	this->speed = speed;	
}

// destructor for the Tricycle
Tricycle::~Tricycle() {
		cout << "tricycle deleted";
}

// get trike's speed
int Tricycle::getSpeed() {
		return speed;
}

// get trike's age
int Tricycle::getAge() {
		return age;
}

void Tricycle::setAge(int age) {
		this->age = age;
}

void Tricycle::setSpeed(int speed) {
		this->speed = speed;
}

void Tricycle::pedal() {
		setSpeed(speed + 1);
		cout << "\nPedaling tricycle at " << getSpeed() << " mph\n";
}

void Tricycle::brake() {
		setSpeed(speed - 1); 
		cout << " Braking tricycle to " << getSpeed() << " mph\n";
}

int main() {
		Tricycle trike(1, 25);

		trike.pedal();
		trike.pedal();
		trike.pedal();
		trike.pedal();
		trike.brake();
		trike.brake();
		trike.brake();

		return 0;
}
