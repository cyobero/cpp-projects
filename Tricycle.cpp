#include "Tricycle.hpp"

// constructor for the object
Tricycle::Tricycle(int speed) {
		this->speed = speed;
}

// destructor for the object
Tricycle::~Tricycle() { }

// set trike's speed
void Tricycle::setSpeed(int speed) {
		if (speed >= 0) this->speed = speed;
}

// create a trike and ride it 
int main() {
		Tricycle trike(10);
		trike.pedal();
		trike.pedal();
		trike.pedal();
		trike.brake();
		trike.brake();

		return 0;
}
