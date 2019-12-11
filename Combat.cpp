/*
 * Demonstrates auto typing
 */

#include <iostream>

using namespace std;

int main() {
	// define character values
	auto strength = 80;
	auto accuracy = 45.6;
	auto dexterity = 24.0;

	// define constants
	const auto MAXIMUM = 50;

	// calculate character combat stats
	auto attack = strength * (accuracy / MAXIMUM);
	auto damage = strength * (dexterity / MAXIMUM);

	cout << "\nAttack rating: " << attack << endl;
	cout << "Damage rating: " << damage << endl;

	return 0;
}
