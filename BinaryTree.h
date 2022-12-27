#pragma once
#include "Node.h"

class BinaryTree {
	Node* root;
	Node* current;
public:
	BinaryTree() {
		root = NULL;
		current = NULL;
	};
	BinaryTree(Node* node) {
		root = node;
		current = root;
	};
	void addLeftChild(Node* node) {
		if (current->getLeft() == NULL) {
			node->setPrev(current);
			current->setLeft(node);
		}
		else {
			cout << "left subtree is occupied" << endl;
		}
	};
	void addRightChild(Node* node) {
		if (current->getRight() == NULL) {
			node->setPrev(current);
			current->setRight(node);
		}
		else {
			cout << "right subtree is occupied" << endl;
		}
	};
	void loadTree() {
		root = new Node("Stony Brook University");
		current = root;
		addLeftChild(new Node("College of Arts and Sciences"));
		addRightChild(new Node("College of Engineering and Applied Sciences"));
		moveToLeft();
		addLeftChild(new Node("BUS"));
		moveToLeft();
		addLeftChild(new Node("BUS 115"));
		current = root;
		moveToRight();
		addLeftChild(new Node("AMS"));
		addRightChild(new Node("ESE"));
		moveToRight();
		addLeftChild(new Node("ESE 224"));
		addRightChild(new Node("ESE 271"));
		current = root;

	};
	void print() {
		cout << current->getData() << endl;
	};
	void moveBackward() {
		if (current != root) {
			current = current->getPrev();
		}
		else {
			current = root;
		}
	};
	void moveToLeft() {
		if (current->getLeft()) {
			current = current->getLeft();
		}
		else {
			cout << "no left node" << endl;
		}
	};
	void moveToRight() {
		if (current->getRight()) {
			current = current->getRight();
		}
		else {
			cout << "no Right node" << endl;
		}
	};
	Node* getHead() {
		return root;
	};
	void printAllPreOrder(Node* node) {
		if (node == NULL)return;
		cout << node->getData() << endl;
		printAllPreOrder(node->getLeft());
		printAllPreOrder(node->getRight());
		
		
	};
	void printAllInOrder(Node* node) {
		if (node == NULL)return;
		printAllPreOrder(node->getLeft());
		cout << node->getData() << endl;
		printAllPreOrder(node->getRight());
		
	};
	void printAllPostOrder(Node* node) {
		if (node == NULL)return;
		printAllPreOrder(node->getLeft());
		printAllPreOrder(node->getRight());
		cout << node->getData() << endl;

		
	};
	int maxDepth(Node* root) {
		int res;
		if (root == NULL) {
			return 0;
		}else{
			int left = maxDepth(root->getLeft());
			int right = maxDepth(root->getRight());
			 res= max(left, right) + 1;
		}
		return res;
	};

};