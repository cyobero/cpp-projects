/* An example of enumeration 
 */

#include <iostream>

using namespace std;

int main() {
	// create enumeration 
	enum Direction {North, Northeast, East, Southeast, South, Southwest, West, Northwest};
	
	// create variable to hold enumeration
	Direction heading;
	// initialize variable
	heading = Southeast;

	cout << "Heading ---> " << heading << endl;

	return 0;	
}
