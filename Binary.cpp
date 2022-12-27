#include "BinaryTree.h"
#include <string>

#include <iostream>
#include "BinaryTree.h"
using namespace std;

void controlPanel(istream&, BinaryTree& binaryTree);

int main() {
	cout << "Opening Organizer.cpp ..." << endl;
	BinaryTree binaryTree;
	controlPanel(cin, binaryTree);
	cout << "\nExiting the program..." << endl;
	return 0;
}

void controlPanel(istream& in, BinaryTree& binaryTree) {

	cout << "(p) - Print current data" << endl;
	cout << "(b) - Move back" << endl;
	cout << "(l) - Move to left" << endl;
	cout << "(r) - Move to right" << endl;
	cout << "(u) - Print in pre-order" << endl;
	cout << "(i) - Print in in-order" << endl;
	cout << "(o) - Print in post-order" << endl;
	cout << "(L) - Add a new left child" << endl;
	cout << "(R) - Add a new right child" << endl;
	cout << "(T) - Load example binary tree" << endl;
	cout << "(d) - Print max depth" << endl;
	char expression = '1';
	while (expression != 'q') {
		cout << "\nPlease select an option: ";
		string data;
		in >> expression;

		switch (expression) {
		case 'd':
			cout << binaryTree.maxDepth(binaryTree.getHead()) << endl;
		case 'L':
			cout << "\nPlease enter a data for a new left child: ";
			in >> data;
			binaryTree.addLeftChild(new Node(data));
			break;
		case 'R':
			cout << "\nPlease enter a data for a new right child: ";
			in >> data;
			binaryTree.addLeftChild(new Node(data));
			break;
		case 'T':
			binaryTree.loadTree();
			break;
		case 'p':
			binaryTree.print();
			break;
		case 'b':
			binaryTree.moveBackward();
			break;
		case 'l':
			binaryTree.moveToLeft();
			break;
		case 'r':
			binaryTree.moveToRight();
			break;
		case 'u':
			binaryTree.printAllPreOrder(binaryTree.getHead());
			break;
		case 'i':
			binaryTree.printAllInOrder(binaryTree.getHead());
			break;
		case 'o':
			binaryTree.printAllPostOrder(binaryTree.getHead());
			break;
		}
	}
}

