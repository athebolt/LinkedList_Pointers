#include "DoublyList.h"
#include "iostream"

DoublyList::DoublyList()
{

}

void DoublyList::appendNode(Pet* p)
{
	Node* node = new Node();

	Node* curNode;

	Node* previousNode = nullptr;

	node->setPet(p);

	if (!head)
	{
		head = node;
		tail = node;
	}
	else
	{
		curNode = head;

		//adds the node to the end of the list
		while (curNode != nullptr)
		{
			previousNode = curNode;

			curNode = curNode->getNext();
		}

		previousNode->setNext(node);

		node->setPrev(previousNode);

		tail = node;
	}
}

void DoublyList::insertNode(Pet *p)
{
	Node* node = new Node();

	Node* curNode;

	Node* previousNode = nullptr;

	node->setPet(p);

	if (!head)
	{
		head = node;
		tail = node;
	}
	else
	{
		curNode = head;

		//cycle until i reach where the node needs to be inserted
		while (curNode != nullptr && curNode->getPet()->getId() < p->getId())
		{
			previousNode = curNode;

			curNode = curNode->getNext();
		}

		//if the node is going to be inserted at the beginning of the list
		if (previousNode == nullptr)
		{
			head = node;

			node->setNext(curNode);

			curNode->setPrev(node);
		}
		//if the node is going to be inserted at the end of the list
		else if(curNode == nullptr)
		{
			tail = node;

			previousNode->setNext(node);

			node->setPrev(previousNode);

			node->setNext(nullptr);
			
		}
		//if the node is going to be inserted anywhere else in the list
		else
		{
			previousNode->setNext(node);

			node->setNext(curNode);

			node->setPrev(previousNode);

			curNode->setPrev(node);
		}
	}
}

void DoublyList::deleteNode(int i)
{
	Node* curNode = head;

	Node* previousNode = nullptr;

	//stops if nothing is in the list
	if (!head)
	{
		return;
	}

	//if the node to delete is the head
	if (curNode->getPet()->getId() == i)
	{
		curNode = head->getNext();

		head->getNext()->setPrev(nullptr);

		delete head;

		head = curNode;
	}
	//if the node to delete is the tail
	else if (tail->getPet()->getId() == i)
	{
		previousNode = tail->getPrev();

		previousNode->setNext(nullptr);

		delete tail;

		tail = previousNode;
	}
	//if the node to delete is not the head or tail
	else
	{
		//cycle until i find the node to delete
		while (curNode != nullptr && curNode->getPet()->getId() != i)
		{
			previousNode = curNode;
			
			curNode = curNode->getNext();
		}

		//makes sure the node to delete exists
		if (curNode)
		{
			previousNode->setNext(curNode->getNext());

			curNode->getNext()->setPrev(previousNode);

			delete curNode;
		}
	}
}

void DoublyList::displayForward()
{
	Node* curNode;

	curNode = head;

	while (curNode != nullptr)
	{
		cout << "Id: " << curNode->getPet()->getId() << endl;
		cout << "Name: " << curNode->getPet()->getName() << endl;
		cout << "Type: " << curNode->getPet()->getType() << endl;
		cout << "Age: " << curNode->getPet()->getAge() << endl << endl;

		curNode = curNode->getNext();
	}
}

void DoublyList::displayBackward()
{
	Node* curNode;

	curNode = tail;

	while (curNode != nullptr)
	{
		cout << "Id: " << curNode->getPet()->getId() << endl;
		cout << "Name: " << curNode->getPet()->getName() << endl;
		cout << "Type: " << curNode->getPet()->getType() << endl;
		cout << "Age: " << curNode->getPet()->getAge() << endl << endl;

		curNode = curNode->getPrev();
	}
}