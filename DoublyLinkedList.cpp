#include <iostream>

class Node {
	public:
	 	int data;	
		Node* pNext = nullptr; 
		Node* pPrevious = nullptr;
	 	Node() {};
		Node(int dta) { data = dta; }	
		~Node() {};
		void displayNode() { std::cout << data << " "; }
};

class DoublyLinkedList {
	public:
		DoublyLinkedList() {
			Node* pFirst = nullptr;
			Node* pLast = nullptr;	
		}

		~DoublyLinkedList() {};
		void insertFirst(int data); 
		void insertLast(int data); 
		int deleteFirst(); 
	private:
		Node* pFirst = nullptr;
		Node* pLast = nullptr;	

		bool isEmpty() { return (pFirst==nullptr); }
};

void DoublyLinkedList::insertFirst(int data) {
	*Node newNode;

}
