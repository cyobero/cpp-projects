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
			std::cout << "deleting node with key " << this->key << std::endl;
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
			while (current->right != nullptr) {
				current = current->right;
				std::cout << "Searching right child for max\n";
			}
			return *current;
		}	
		
};

void showLocation(Node & node) {
	std::cout << "location of " << node.key << " is at " << &node.key << std::endl;
}

int main() {
	Node a(21);
	Node b(15);
	Node c(3);
	Node d(41);
	Node e(5);
	Node f(38);
	Node g(51);

	Node &root = a;
	
	showLocation(a);
	showLocation(root);

	Node &pB = b;
	showLocation(pB);
	std::cout << "\n";

//	std::cout << "max is "<< root.findMax() << std::endl;

	// insert nodes
	root.insert(b);
	root.insert(d);
	root.insert(e);
	root.insert(f);
	root.insert(g);

	Node max = root.findMax();
	std::cout << "max: " << max.key << std::endl;
	
	return 0;
}
