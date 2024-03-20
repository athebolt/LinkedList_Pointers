#include "Node.h"
Node::Node()
{
	next = nullptr;
	prev = nullptr;
}

void Node::setPet(Pet* p)
{
	pet = p;
}

void Node::setNext(Node* n)
{
	next = n;
}

void Node::setPrev(Node* p)
{
	prev = p;
}

Pet* Node::getPet() const
{
	return pet;
}
Node* Node::getNext() const
{
	return next;
}
Node* Node::getPrev() const
{
	return prev;
}