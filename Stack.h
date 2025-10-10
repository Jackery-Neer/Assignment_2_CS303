#pragma once
#include "Single_Linked_List.h"

class Stack{
private:
    vector<int> data;
public:
    //Pre: None
    //Post: Returns true if stack is empty, false otherwise
    bool empty() const;

    //Pre: None
    //Post: Pushes integer item onto the stack
    void push(int item);

    //Pre: None
    //Post: Removes top element from stack if not empty
    void pop();

    //Pre: None
    //Post: Returns top element if stack is not empty
    int top() const;

    //Pre: None
    //Post: Returns average of all values in stack, 0 if empty
    double average() const;
};
