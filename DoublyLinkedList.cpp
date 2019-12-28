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
	charlist->reverse();
	return 0;
}
