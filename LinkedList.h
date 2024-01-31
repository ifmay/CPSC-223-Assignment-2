#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
#include <iostream>

template<typename T>
class LinkedList {
public:

    // default constructor
    // set head to nullptr
    LinkedList();

    // destructor
    // delete all nodes in the list from memory
    ~LinkedList();

    // adds a new node with data value at beginning of list
    void insert(const T& data);

    // finds and removes the first occurance of data value from list
    void remove(const T& data);

    // searches the list for the data value
    // if found, search returns true, else returns false
    bool search(const T& data) const;

    // prints the list to the terminal
    void display() const;

    // checks if list is empty
    // returns true if list is empty, else false
    bool isEmpty() const;

private:
    Node<T>* head;
};

template<typename T>
LinkedList<T>::LinkedList() : head(nullptr) {}

template<typename T>
void LinkedList<T>::display() const {
    Node<T>* current = head;
    if(current != nullptr){
        std::cout << "#";
    }
    while (current != nullptr) {
        std::cout << current->getData() << " ";
        current = current->getNext();
    }
    std::cout << "#" << std::endl;
}

//you finish remaining functions

#endif
