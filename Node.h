#ifndef NODE_H
#define NODE_H

template<typename T>
class Node {
public:

    // EVC Constructor
    // Sets the Node's data to data from param
    // Sets next node to nullptr
    Node(const T& data);

    // returns the current value of the node
    T getData() const;

    // returns the next node in the list
    Node<T>* getNext() const;

    // sets the next node in the list to next from param
    void setNext(Node<T>* next);

private:
    T data;
    Node<T>* next;
};

// you write implementations

#endif
