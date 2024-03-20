#pragma once
#include "Pet.h"
class Node
{
private:
	Pet* pet;
	Node* next;
	Node* prev;
public:
	Node();

	void setPet(Pet*);
	void setNext(Node*);
	void setPrev(Node*);

	Pet* getPet() const;
	Node* getNext() const;
	Node* getPrev() const;
};

