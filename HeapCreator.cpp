#include <iostream>

using namespace std;

class SimpleCat {
	public:
		SimpleCat();
		~SimpleCat();
	private:
		int age;
};

SimpleCat::SimpleCat() {
	cout << "Constructor called\n";
	age = 1;	
}

SimpleCat::~SimpleCat() {
	cout << "Destructor called\n";
}

int main() {
	cout << "SimpleCat Frisky ...\n";
	SimpleCat *pCat = new SimpleCat;

	cout << "SimpleCat *pCat = new SimpleCat ...\n";
	
	cout << "deleting pCat ...\n";

	delete pCat; 

	return 0;
}
