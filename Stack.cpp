#include "Stack.h"
//Uses vector fn to push value onto stack
void Stack::push(int item) {
    data.push_back(item);
    cout << "Added " << item << " to the stack.\n";
}

//Uses vector fn to check if empty
bool Stack::empty() const{
    return data.empty();
}

void Stack::pop() {
    //Check if stack is empty, otherwise pops last element added using vec fn
    if (empty()) {
        cout << "Stack is empty. Cannot remove values.";
    } else {
        cout << "Removed " << data.back() << " from the stack.\n";
        data.pop_back();
    }
}


int Stack::top() const{
    //Checks if empty
    if (empty()) {
        cout << "Stack is empty. There is no top element.\n";
    }
    //Returns back element, or last element added
    return data.back();
}

double Stack::average() const{
    //Checks if empty
    if (empty()) {
        return 0.0;
    } else {
        int sum = 0;
        //Loops through all values in stack adding to sum
        for (size_t i = 0; i < data.size(); i++) {
            sum += data.at(i);
        }
        //Changes sum to double in order to do division
        //Returns average of all values
        return static_cast<double>(sum) / data.size();
    }
}