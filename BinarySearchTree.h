#include <iostream>

class Node {
	public:	
		Node() { std::cout << "creating node" << std::endl; }
		Node(int newKey) { 
			key = newKey;
			left = nullptr;
			right = nullptr;
			
			std::cout << " creating node with key " << key << " at address " 
				<< &key << std::endl;
		}
		~Node() {
			//delete left;
			//delete right;
			//std::cout << "deleting node with key " << this->key << std::endl;
		}

		int key;
		Node *left;
		Node *right;

		void insert(Node &node) {
			Node *current = this;
			Node *parent = new Node;	
			while (true) {
				parent = current;
				if (node.key < current->key) {
					current = current->left;
					std::cout << "attaching " << node.key << " to the left" << std::endl;	
					if (current == nullptr) {	
						parent->left = &node;
						return;
					}
				} else {
					current = current->right;
					std::cout <<"attaching " << node.key << " to the right" << std::endl;
					if (current == nullptr) {
						parent->right = &node;
						return;
					}
				}
			}
		}	
		
		Node findMax() {
			Node *root = this;
			Node *current = root;

			// Starting from root node, keep checking right node for maximum
			// until current->right == nullptr 
			while (current->right != nullptr) {
				current = current->right;
				std::cout << "Searching right child for max\n";
			}
			return *current;
		}	

		Node findMin() {
			Node *root = this;
			Node * current = root;

			// Starting from root node, keep checking left for minimum
			// until current->left == nullptr
			while (current->left != nullptr) {
				current = current->left;
				std::cout << "Searching left for min\n";
			}
			return *current;
		}
		
};

void showLocation(Node & node) {
	std::cout << "location of " << node.key << " is at " << &node.key << std::endl;
}

