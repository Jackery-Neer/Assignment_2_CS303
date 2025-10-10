#include "Single_Linked_List.h"
#include "Stack.h"


int main() {
    //Create vector based stack
    Stack vec_stack;

    cout << "The vector based stack has been created.\n";

    cout << "Is the stack empty?\n";

    //Check if stack is empty
    if (vec_stack.empty()) 
        cout << "Yes\n";
    else 
        cout <<"No\n";
    
    //Push integers onto stack
    vec_stack.push(6);
    vec_stack.push(7);
    vec_stack.push(58);
    vec_stack.push(45);
    
    //Remove element from stack
    vec_stack.pop();

    //Return top value in stack
    cout << "The top of the stack is " << vec_stack.top() << endl;

    //Return average value in stack
    cout << "The average of all values in the stack is " << vec_stack.average() << endl;

    return 0;
}