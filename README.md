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

