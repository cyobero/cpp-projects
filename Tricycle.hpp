#include <iostream>

using namespace std; 

class Tricycle {
		public:
				Tricycle(int speed);
				~Tricycle();
				int getSpeed() const { return speed; }
				void setSpeed(int speed);
				void pedal() {
						setSpeed(speed + 1);
						cout << "Pedaling at " << speed << " mph\n\n";
				}
				void brake() {
						setSpeed(speed - 1);
						cout << "Braking speed to " << speed << " mph\n\n";
				}
		private:
				int speed;
};
