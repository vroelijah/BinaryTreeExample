#pragma once
#include <iostream>
using namespace std;
class Node {
	string data;
	Node* prev;
	Node* left;
	Node* right;
public:
	Node() {
		data = "";
		left = NULL;
		right = NULL;
	}
	Node(string data) {
		this->data = data;
		left = NULL;
		right = NULL;
	}
	void setLeft(Node* left) {
		this->left = left;
	}
	void setRight(Node* right) {
		this->right = right;
	}
	void setPrev(Node* prev) {
		this->prev = prev;
	}
	string getData() {
		return data;
	}
	Node* getLeft() {
		return left;
	}
	Node* getRight() {
		return right;
	}
	Node* getPrev() {
		return prev;
	}
};