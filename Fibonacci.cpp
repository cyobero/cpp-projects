#include <iostream>

int fibonacci(int n) {
	if (n < 2) return 1; 
	else return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
	for (int i = 0; i < 10; i++) {
		std::cout << fibonacci(i) << std::endl;
	}
	return 0;
}
