#include <iostream>

template <class T>
class Node {
	public:
		T data;
		Node<T> *next;

		Node(T newData) { data = newData; }
};

template <class T>
class LinkedList {
	public:
		Node<T> *head;

		void insert(T newData) {
			Node<T>* newNode = new Node<T>(newData);
			newNode->data = newData;
			newNode->next = head;
			head = newNode;
		}

		void display() {
			Node<T> *ptr; 
			ptr = head;
			while (ptr != nullptr) {
				std::cout << ptr->data << " "; 
				ptr = ptr->next;
			}
		}
};

int main() {
	LinkedList<int> *intlist = new LinkedList<int>();
	LinkedList<std::string> *strlist = new LinkedList<std::string>();

	strlist->insert("homer");
	strlist->insert("marge");
	strlist->insert("bart");
	strlist->insert("lisa");
	strlist->insert("maggie");

	intlist->insert(45);
	intlist->insert(29);
	intlist->insert(5);
	intlist->insert(33);

	intlist->display();
	std::cout << "\n";
	strlist->display();
	return 0;
}
