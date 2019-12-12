#include <iostream>
#include <string.h>

typedef unsigned long pDate;

enum SERVICE { kPostMaster, kInterchange, kGmail, kHotmail, kAOL, kInternet };


class String {
	public:
		String();
		String(const char *const);
		String(const String&);
		~String();

		// overloading operators
		char &operator[] (int offset);
		char operator[] (int offset) const; 
		String operator+ (const String&);
		void operator+= (const String&);
		String &operator=(const String&);
		friend std::ostream &operator <<
			(std::ostream &stream, String &newString);

		// general accessors
		int getLen() const { return len; }
		const char *getString() const { return string; }
	private:
		String(int); 
		char *string; 
		int len;
};


// Default constructor creates string of 0 bytes
String::String() {
	string = new char[1];
	string[0] = '\0';
	len = 0;
	// std::cout << "\tDefault string constructor\n";
	// constructorCount++;
}

// Private (helper) constructor used only by class functions for creating a new string of
// required size.
String::String(int newLen) {
	string = new char[newLen + 1];
	for (int i = 0; i <= newLen; i++) string[i] = '\0';
	len = newLen;
	// std::cout << "\tString(int) constructor\n";
	// constructorCount++;
}

// converts a character array to a string
String::String(const char* const cString) {
	len = strlen(cString); 
	string = new char[len + 1];
	for (int i = 0; i < len; i++) {
		string[i] = cString[i];
	}
	string[len] = '\0';
	// std::cout << ''\tString(char*) constructor\n";
	// constructorCount++;
}

// copy constructor
String::String(const String &rhs) {
	len = rhs.getLen();
	string = new char[len + 1];
	for (int i = 0; i < len; i++) {
		string[i] = rhs[i];
	}
	string[len] = '\0';
	// std::cout << "\tString(String&) constructor\n";
	// constructorCount++
}

String::~String() {
	delete [] string;
	len = 0; 
	// std::cout << "\tString destructor\n";
}

String &String::operator=(const String &rhs) {
	if (this == &rhs) return *this; 
	delete [] string; 
	len = rhs.getLen();
	string = new char[len + 1];
	
	for (int i = 0; i < len; i++) {
		string[i] = rhs[i];
	}
	string[len] = '\0';
	return *this;
	// std::cout << "\tString operator=\n";
}

// Non-constant offset operator that returns reference to character so it can be changed
char &String::operator[] (int offset) {
	if (offset > len) return string[len - 1];
	else return string[offset];
}

// constant offset operator for use on const objects (see copy instructor!)
char String::operator[] (int offset) const {
	if (offset > len) return string[len - 1];
	else return string[offset];
}

// creates new string by adding current string to rhs
String String::operator+(const String& rhs) {
	int totalLen = len + rhs.getLen();
	String temp(totalLen);
	
	for (int i = 0; i < len; i++) temp[i] = string[i];
	for (int j = 0, i = 0; j < rhs.getLen(); j++, i++) temp[i] = rhs[j];
  
	temp[totalLen] = '\0';
	
	return temp;
}

// changes current string, returns nothing
void String::operator+=(const String &rhs) {
	int rhsLen = rhs.getLen();
	int totalLen = len + rhsLen;
	String temp(totalLen);
	
	for (int i = 0; i < len; i++) temp[i] = string[i];
	for (int j = 0, i = 0; j < rhs.getLen(); j++, i++) temp[i] = rhs[i - len];
	
	temp[totalLen] = '\0';
	*this = temp;
}

// int String::ConstructorCount = 0;


std::ostream& operator<<(std::ostream &stream, String &newString) {
	stream << newString.getString();
	return stream;
}


