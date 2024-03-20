//=====================================================================
//Name: Alex Thebolt
//Date: 03-15-2023
//Desc: Program 1: Doubly Linked List - Lists nodes consisting of pets.
//The pets each have an id, type, name and age. This list can append,
//insert, and delete nodes from itself.
//=====================================================================

#include <iostream>
#include "Pet.h"
#include "Node.h"
#include "DoublyList.h"

using namespace std;

int main()
{
    Pet *pet;
    DoublyList list;

    //=====================================
    //Append Nodes
    //=====================================

    //cout << "Appending" << endl;

    pet = new Pet(10, "Dog", "Drake", 20);

    list.appendNode(pet);

    pet = new Pet(20, "Dog", "Ginger", 12);

    list.appendNode(pet);

    pet = new Pet(30, "Dog", "Biddle", 7);

    list.appendNode(pet);

    pet = new Pet(40, "Cat", "Carmel", 9);

    list.appendNode(pet);

    pet = new Pet(50, "Hampster", "Ted", 4);

    list.appendNode(pet);

    //=======================================
    //Insert Nodes
    //=======================================

    cout << "Inserting" << endl;

    pet = new Pet(55, "Cow", "Rusty", 2);

    list.insertNode(pet);

    pet = new Pet(5, "Snail", "Garry", 10);

    list.insertNode(pet);

    pet = new Pet(35, "Snake", "Mike", 7);

    list.insertNode(pet);
    
    ////========================================
    ////Delete Nodes
    ////========================================
    
    //cout << "Deleting" << endl;

    //list.deleteNode(50);

    //list.deleteNode(10);
    
    //list.deleteNode(30);

    //========================================
    //Displays
    //========================================

    cout << "Foreward Display" << endl;
    cout << "================" << endl;
    list.displayForward();

    cout << "Backward Display" << endl;
    cout << "================" << endl;
    list.displayBackward();
}
