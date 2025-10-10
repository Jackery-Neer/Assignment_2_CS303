#pragma once

#include <iostream>
#include <vector>
using namespace std;

//Template used throughout so data can have any data type
template<typename T>
struct Node {
    T data;
    Node* next;

    //Constructor
    Node(T value) : data(value), next(nullptr) {} 
};

template <typename T>
class Single_Linked_List {
private:
    Node<T>* head;
    Node<T>* tail;
    int num_items;

public:
    //Class Constructor
    Single_Linked_List() : head(nullptr), tail(nullptr), num_items(0) {};

    //Class Destructor
    ~Single_Linked_List();

    //Pre: none
    //Post: Adds new node to the front of the linked list
    void push_front(const T& val);

    //Pre: none
    //Post: Adds new node to the back of the linked list
    void push_back(const T& val);

    //Pre: none
    //Post: Removes first value in linked list
    void pop_front();

    //Pre: none
    //Post: Removes last value in linked list
    void pop_back();

    //Pre: none
    //Post: returns first value in linked list
    Node<T>* front() const;

    //Pre: none
    //Post: returns last value in linked list
    Node<T>* back() const;

    //Pre: none
    //Post: Checks to see if linked list is empty
    bool empty() const;

    //Pre: none
    //Post: Inserts new node with data item into linked list using index to get position in linked list
    //If linked list is empty it adds item to beginning/end of linked list
    //If index is larger than the amount of items in the linked list, adds it to the end of the linked list
    void insert(size_t index, const T& item);

    //Pre: none
    //Post: Removes item in linked list based on passed index, if it successfully removes item returns true, else false
    //False if linked list is empty (there is nothing that can be removed) or if index points to something not in linked list (farther than there are vals in list)
    bool remove(size_t index);

    //Pre: none
    //Post: Finds item in linked list and returns the index associated with that item, if nothing found returns size of list
    size_t find(const T& item) const;
};