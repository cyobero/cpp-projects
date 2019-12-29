#include <iostream>

template <class T>
class Node
{
	public:
		int key;
		T data;
		Node<T> *next; 
		// singly linked list does not have a `previous` pointer but doubly linked list does
		Node<T> *previous;

		Node(int newKey, T newData) { data = newData; key = newKey;}
};

template <class T>
class LinkedList
{
	public:
		Node<T> *head; 
		Node<T> *tail;

		void insert(int newKey, T newData)
		{
			Node<T>* newNode = new Node<T>(newKey, newData);
			if (head == nullptr)
			{
				head = newNode;
				tail = head;
			} else
			{
				newNode->previous = tail;
				tail->next = newNode;
				tail = newNode;
			}
		}

		Node<T>* removeHead()
		{
			Node<T>* oldhead = head;
			head = head->next;
			return oldhead;
		}

		Node<T>* removeTail()
		{
			Node<T>* oldtail = tail;
			tail = tail->previous;
			return oldtail;
		}

		void display()
		{
			Node<T> *ptr;
			ptr = head;
			while (ptr != nullptr)
			{
				std::cout << ptr->data << " ";
				ptr = ptr->next;
			}
		}

		void insertAfter(int targetKey, int newKey, T newData)
		{
			// search for target key. make pointer and let it keep
			// searching the its next node until (a) it reaches the tail, and/or
			// (b) the target key has been found.
			// 			if target key found:
			
			
			// pointer node which will iterate through the linked list	
			Node<T> * ptr = head;
			while (ptr->next != nullptr)
			{
				ptr = ptr->next;
				if (ptr->key == targetKey)
				{
					// target key found
					std::cout << "target key " << targetKey << "found with value: " << newData << std::endl;
					Node<T>* newNode = new Node<T>(newKey, newData);
					ptr->next = newNode;
				 	ptr->next->previous = newNode;	
					newNode->previous = ptr;
					ptr = newNode;
					return;
				} 			
			}
			// no matchking key was found
			std::cout << "No matching key found." << std::endl;
		}

		void reverse()
		{
			Node<T> *ptr;
			ptr = tail;
			while (ptr != nullptr)
			{
				std::cout << ptr->data << " ";
				ptr = ptr->previous;
			}
		}
};

int main() {
	LinkedList<int> *intlist = new LinkedList<int>();
	LinkedList<char> *charlist = new LinkedList<char>();

	charlist->insert(0, 'c');
	charlist->insert(1, 'z');
	charlist->insert(2, 'a');
	charlist->insert(3, 'r');

	intlist->insert(5, 5);
	intlist->insert(2, 2);
	intlist->insert(33, 33);
	intlist->insert(991, 991);
	intlist->insert(3, 3);

	intlist->display();
	std::cout << "\n";
	intlist->reverse();
	std::cout << "\n";
	charlist->display();
	std::cout << "\n";
	charlist->removeTail();
	charlist->reverse();

	charlist->insertAfter(1, 4, 'y');
	intlist->insertAfter(3, 4, 4);
	intlist->insertAfter(19, 21, 21);

	return 0;
}
