#include "Single_Linked_List.h"

//Deallocates dynamic memory
template <typename T>
Single_Linked_List<T>::~Single_Linked_List() {
    Node<T>* current = head;
    //Loops until it deletes the tail which always points to nullptr
    while(current != nullptr) {
        Node<T>* nextNode = current->next;
        //Deallocate
        delete current;
        current = nextNode;
    }
    //Sets head, tail, and num_items
    head = tail = nullptr;
    num_items = 0;
}

template <typename T>
void Single_Linked_List<T>::push_front(const T& val) {
    //Create node being added
    Node<T>* new_head = new Node<T>(val);
    //Checks to see if empty
    if (head == nullptr) {
        head = tail = new_head;
    } else {
        //If not empty adds to beginning
        new_head->next = head;
        head = new_head;
    }
    //Increases num_items
    num_items++;
}

template <typename T>
void Single_Linked_List<T>::push_back(const T& val) {
    //Creates new node to be added
    Node<T>* new_tail = new Node<T>(val);
    //Checks if empty
    if (tail == nullptr) {
        head = tail = new_tail;
    } else {
        //If not empty adds new node to list
        tail->next = new_tail;
        tail = new_tail;
    }
    //Increases num_items
    num_items++;
}

template <typename T>
void Single_Linked_List<T>::pop_front() {
    //If empty, nothing happend
    if (head == nullptr) {
        return;
    } else {
        //If not deletes head and changes head to ->next
        Node<T>* pop = head;
        head = head->next;
        delete pop;
        //Decrease num_items
        num_items--;
        //Checks to see if list is now empty to update tail
        if (head == nullptr) 
            tail = nullptr;
    }
}

template <typename T>
void Single_Linked_List<T>::pop_back() {
    //If empty does nothing
    if (tail == nullptr)
        return;
    //If 1 item, deletes and then sets head and tail to nullptr
    if (tail == head) {
        delete head;
        tail = head = nullptr;
    } else {
        //If more than 1 
        Node<T>* current = head;
        //Loops through to node before tail so you have proper ->next
        while (current->next != tail) {
            current = current->next;
        }
        current->next = nullptr;
        //Deletes last item
        delete tail;
        tail = current;
        //Decreases items
        num_items--;
    }
}

//Returns first item (head)
template <typename T>
Node<T>* Single_Linked_List<T>::front() const{
    return head;
}

//Returns last item (tail)
template <typename T>
Node<T>* Single_Linked_List<T>::back() const{
    return tail;
}

//Checks if head is nullptr
//if yes will return true meaning it is empty
//If no, returns false meaning there are items in list
template <typename T>
bool Single_Linked_List<T>::empty() const{
    return head == nullptr;
}

template <typename T>
void Single_Linked_List<T>::insert(size_t index, const T& item) {
    //If index is 0, creates new head
    if (index == 0) {
        push_front(item);
        return;
    }
    //If index greater than or equal to num_items, means add to end
    if (index >= num_items) {
        push_back(item);
        return;
    }
    //Index in middle
    Node<T>* current = head;
    Node<T>* newNode = new Node<T>(item);
    //Loops to item before index
    for (size_t i = 0; i < index - 1; i++) {
        current = current->next;
    }
    //Changes ->nexts so node is added correctly
    newNode->next = current->next;
    current->next = newNode;
    //Increase num_items
    num_items++;
}

template <typename T> 
bool Single_Linked_List<T>::remove(size_t index) {
    //Returns false if nothing to remove
    if (empty()) 
        return false;
    //Returns false if index does not match to number of items in list
    if (index >= num_items) 
        return false;
    //Removes first item if index is 0
    if (index == 0) {
        pop_front();
        return true;
    }
    //Removes last item if index is 1 less than the number of items
    if (index == num_items - 1) {
        pop_back();
        return true;
    }
    Node<T>* current = head;
    //Loops to item before index
    for (size_t i = 0; i < index - 1; i++) {
        current = current->next;
    }
    //Gets node wanting to be removed
    Node<T>* pop = current->next;
    //Places ->next to new spot 
    current->next = current->next->next;
    //Deallocates memory
    delete pop;
    //Updates number of items (decrease)
    num_items--;
    //Returns true for bool object
    return true;
}

template <typename T>
size_t Single_Linked_List<T>::find(const T& item) const{
    //If empty no item to find returns size
    if(empty()) {
        return num_items;
    }
    Node<T>* current = head;
    //Loops through all items in list
    for (size_t i = 0; i < num_items; i++) {
        //Checks if data in current node is the item trying to be found
        if (current->data == item)
            //Returns index 
            return i;
        else
            current = current->next;
    }
    //If finishes loop means item was not found, returns number of items
    return num_items;

}