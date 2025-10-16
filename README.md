# Assignment_2_CS303
Title: 
Assignment #2 for CS-303

Description: 
The code contains 2 .h files and 3 .cpp files

Single_Linked_List.h
Contains a struct and a class. The struct is the node that holds the data inside each node, and a pointer to the next node in the linked list, along with a constructor. Template is utilized to allow for more flexible data types within the linked list. The class is the formation of the linked list and contains all the functions necessary for a linked list. 

Stack.h
Contains a class. The class is designed to be a stack that operates using vectors. This file contains all declarations of the functions utilized within the stack. 

Single_Linked_List.cpp
Contains all the function definitions for the single linked list class to operate as a single linked list. 

Stack.cpp
Contains all the function definitions for the vector based stack to operate as a stack

Assignment_2.cpp
Main function. Creates a stack and checks to see if the stack is empty upon creation. Adds integers to the stack, removes an integer, and then returns the top value of the stack. Then returns average of all the values inside of the stack. 

Implementation: 
To run the code run command: 
clang++ -std=c++14 Assignment_2.cpp Stack.cpp Single_Linked_List.cpp
Then run:
./a.out

Output: 
Output.png

Runtime:
The runtime of the main program is O(1) on average since the program only runs the vector based stack, and every function in the vector based stack is O(1) except for the average function. The average function is O(n) if the stack is not empty. If the stack is empty it is    O(1). If I were to utilize the linked list the runtime for that would be a little different depending on what functions are called. 

To push an element or remove an element in the front or back of the linked list the runtime is O(1). To find an element in the linked list, the runtime is O(n) on average and worst case, but O(1) for best case. To insert or remove an indicated element in the linked list, the average and worst case is O(n), but the best case is O(1). The deconstructor for the linked list class has runtime O(n). 

UML Diagram:
Single_Linked_List
---------------
-head: Node<T>*
-tail: Node<T>*
-num_items: int
-----------------
+Single_Linked_List()
+~Single_Linked_List()
+push_front(constT& val): void
+push_back(constT& val): void
+pop_front(): void
+pop_back(): void
+front() const: Node<T>* 
+back() const: Node<T>* 
+empty(): bool
+insert(size_t index, constT& item): void
+remove(size_t index): bool
+find(const T& item) const: size_t 

Stack
-----------
-data: vector<int>
----------------
+empty() const: bool 
+push(int item): void
+pop(): void
+top() const: int
+average() const: double


