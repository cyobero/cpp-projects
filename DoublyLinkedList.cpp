#include <iostream>

template <class T>
class Node
{
	public:
		T data;
		Node<T> *next; 
		// singly linked list does not have a `previous` pointer but doubly linked list does
		Node<T> *previous;

		Node(T newData) { data = newData; }
};

template <class T>
class LinkedList
{
	public:
		Node<T> *head; 
		Node<T> *tail;

		void insert(T newData)
		{
			Node<T>* newNode = new Node<T>(newData);
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

	intlist->insert(5);
	intlist->insert(2);
	intlist->insert(33);
	intlist->insert(991);
	intlist->insert(3);

	intlist->display();
	std::cout << "\n";
	intlist->reverse();
	return 0;
}
