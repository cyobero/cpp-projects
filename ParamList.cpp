#include <iostream>

enum { kIsSmaller, kIsLarger, kIsSame };

// Any class in this linked list must support two functions:
// (1) show [display the value] and compare [return relative position]
class Data {
	public:
		Data(int newVal):value(newVal) {}
		~Data() {
			std::cout << "Deleting Data object with value: ";
			std::cout << value << "\n";
		}
		int compare(const Data&); 
		void show() { std::cout << value << "\n"; }
	private:
		int value;
};

// A function that decides where in the list a particular object belongs. 
int Data::compare(const Data& otherObject) {
	if (value < otherObject.value) return kIsSmaller;
	if (value > otherObject.value) return kIsLarger;
	else return kIsSame; 
}

// Another class to put into the linked list
class Robot {
	public:
		Robot(int newAge): age(newAge) {}
		~Robot() {
			std::cout << "Deleting...";
			std::cout << age << "-year-old robot.\n";
		}
		int compare(const Robot&); 
		void show() {
			std::cout << "This robot is " << age << " years old." << std::endl;
		}
	private:
		int age;
};

// This class compares a different value than Data
int Robot::compare(const Robot& otherRobot) {
	if (age < otherRobot.age) return kIsSmaller; 
	if (age > otherRobot.age) return kIsLarger; 
	else return kIsSame;
}

// An ADT representing the ndoeo bject in the list. 
// Every derived class must override insert() and show()
template <class T>
class Node {
	public:
		Node() {}
		virtual ~Node() {}
		virtual Node* insert(T* object) = 0; 
		virtual void show() = 0;
	private:	
};

template <class T>
class InternalNode: public Node<T> {
	public:
		InternalNode(T* object, Node<T>* next); 
		~InternalNode() { delete next; delete object; }
		virtual Node<T> * insert(T * object); 
		virtual void show() {
			object->show();
			next->show();
		};
	private:
		T* object;
		Node<T>* next;
};

template <class T>
InternalNode<T>::InternalNode(T* newObject, Node<T>* newNext): object(newObject), next(newNext) {}

// This function stores a new object in the list. The object is passed to the node which 
// determines where it goes and inserts it into the list. 
template <class T>
Node<T>* InternalNode<T>::insert(T* newObject) {
	// determine if new object is bigger
	int result = object->compare(*newObject);

	switch (result) {
		// if same let it go first
		case kIsSame:			// fall through
		case kIsLarger:		// new object comes before
			{
				InternalNode<T>* objectNode = new InternalNode<T>(newObject, this); 
				return objectNode; 
			}
		// it is bigger, so pass it on to the next node 
		case kIsSmaller:
			next = next->insert(newObject);
			return this; 
	}
	return this; 
}
// The last node in the list
template <class T>
class TailNode : public Node<T> {
	public:
		TailNode() {}
		virtual ~TailNode() {}
		virtual Node<T>* insert(T * object);
		virtual void show() {}
	private:
};

// If object comes to me, it must be inserted before me since nothing goes after the tail 
template <class T>
Node<T>* TailNode<T>::insert(T * object) {
	InternalNode<T>* objectNode = new InternalNode<T>(object, this); 
	return objectNode;
}

// The head node, which holds no data but instead points to the beginning of the list
template <class T>
class HeadNode : public Node<T> {
	public:
		HeadNode();
		virtual ~HeadNode() { delete next; }
		virtual Node<T>* insert(T * object); 
		virtual void show() { next->show(); }
	private:
		Node<T> * next;
};

// The fist node in the list, which creates the tail 
template <class T>
HeadNode<T>::HeadNode() { next = new TailNode<T>; }

// Since nothing comes before the head, just pass the object on to the next node
template <class T>
Node<T> * HeadNode<T>::insert(T* object) {
	next = next->insert(object);
	return this;
}

// I get all the cred and do none of the work
template <class T>
class LinkedList {
	public:
		LinkedList();
		~LinkedList() { delete head; }
		void insert(T* object); 
		void showAll() { head->show(); }
	private:
		HeadNode<T> * head;
};

// At birth I create the head node, which creates the tail node
template <class T>
LinkedList<T>::LinkedList() { head = new HeadNode<T>; }

// Delegate to a head node
template <class T>
void LinkedList<T>::insert(T* pObject) { head->insert(pObject); }

int main() {
	Robot* pRobot; 
	Data* pData; 
	int val;
	LinkedList<Robot> listOfRobots; 
	LinkedList<Data> listOfData; 

	// store user values in a linked list
	while (true) {
		std::cout << "What value (0 to stop)?";
		std::cin >> val;
		if (!val) break;
		pRobot = new Robot(val); 
		pData = new Data(val); 
		listOfRobots.insert(pRobot); 
		listOfData.insert(pData);
	}

	// display the list
	std::cout << "\n";
	listOfRobots.showAll();
	std::cout << "\n";
	listOfData.showAll();
	std::cout << "\n *********************** \n\n";
	
	return 0; 
}
