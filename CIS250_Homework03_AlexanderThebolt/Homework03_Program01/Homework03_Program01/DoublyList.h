#pragma once
#include "Node.h"
class DoublyList
{
private:
	Node* head = nullptr;
	Node* tail = nullptr;
public:
	DoublyList();

	void appendNode(Pet*);
	void insertNode(Pet*);
	void deleteNode(int);
	void displayForward();
	void displayBackward();
};