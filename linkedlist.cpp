#include "linkedlist.h"

linkedlist::linkedlist() {
    head = nullptr;
}

linkedlist::~linkedlist() {
    // RECURSIVE
    // Get rid of dynamically allocated data
    // start at HEAD and delete each node with delete ptr
}

int linkedlist::count() {
    // RECURSIVE
    return getcount(head);
}

int linkedlist::getcount(node * ptr){
    //base case is ptr==nullptr
    if(ptr == nullptr){
        return 0;
    }

    return(1 + getcount(ptr->next));
}

void linkedlist::addToFront(int n) {
    //Add a new node to the front of the list
    //-create a node with data = n; next = head;
    //-set head = [node we just created]
    node * nodePtr;
    nodePtr = new node;
    nodePtr->data = n;
    nodePtr->next = head;
    head = nodePtr;
}
void linkedlist::addToBack(int n){
    node * ptr = head;
    while (ptr->next != nullptr){
        ptr = ptr->next;
    }
    ptr->next = new node;
    ptr->next->data = n;
}

void linkedlist::addinOrder(int n){
    //function finds a node with equal or greater data value
    //returns pointer to the node BEFORE that one
    //node * myNode = findNodeDest(myNode, n);
    //cout << "Final check that returned node is " << myNode->data << endl;
    if(head == nullptr){
        addToFront(n);
        cout << "addToFront: " << head->data << endl;
        return;
    }
    if(n <= head->data){
        addToFront(n);
        cout << "addToFront: " << head->data << endl;
        return;
    }

    node * myNode = findNodeDest(n);

    if(myNode->next == nullptr){
        addToBack(n);
        cout << "addToBack: " << myNode->next->data << endl;
        return;
    }
    
    else{
        insert(myNode, n);
        cout << "insert " << myNode->next->data << " after " << myNode->data << endl;
        return;
    }


    


    //if ptr has a data value but no next value, just add to end
    //if ptr has no data value and no next, call addtofront
    //else do an insertion -- 

}

node * linkedlist::findNodeDest(int n){

    node * ptr = head;
    node * temp = ptr;
    while(temp != nullptr){
        ptr = temp;
        cout << "ptr->data is " << ptr->data << endl;
        if(ptr->next != nullptr){
            if(n >= ptr->data && n <= ptr->next->data){
                cout << "returning pointer to node with data = " << ptr->data << endl;
                return ptr;
            }
        }
        cout << "iterating..." << endl;
        temp = ptr->next;
    }
    return ptr;
    
}

void linkedlist::insert(node * prevPtr, int n){
    node * insertPtr = new node;
    node * temp = prevPtr->next;
    
    insertPtr->data = n;
    insertPtr->next = temp;
    prevPtr->next = insertPtr;
    return;

}

double linkedlist::average() {
    // uses sum and count functions
    // sum of all data divided by total count
    return(sum()/count());
}

int linkedlist::sum() {
    // RECURSIVE
    //helper function that takes head node and recursively adds the data from each node
    return getsum(head);
}

int linkedlist::getsum(node * ptr){
    //base case is when ptr is actually empty
    if (ptr == nullptr){
        return 0;
    }
    int n = ptr->data;
    return(n + getsum(ptr->next));
}

void linkedlist::writeInorder(string & file) {

}

void linkedlist::writeReversed(string & file) {
    // RECURSIVE
}