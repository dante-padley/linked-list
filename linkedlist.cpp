#include "linkedlist.h"

linkedlist::linkedlist() {

}

linkedlist::~linkedlist() {
    // RECURSIVE
}

int linkedlist::count() {
    // RECURSIVE
}

void linkedlist::addToFront(int n) {
    //Add a new node to the front of the list
    //-create a node with data = n; next = head;
    //-set head = [node we just created]
}

double linkedlist::average() {
    // uses sum and count functions
    // sum of all data divided by total count
}

int linkedlist::sum() {
    // RECURSIVE
    //helper function that takes head node and recursively adds the data from each node
    return getsum(head);
}

int linkedlist::getsum(node * ptr){
    //base case is when ptr is actually empty
    //this is where i stopped
    //need to get addToFront going so I can create the linkedlist initially
    if (ptr == nullptr){
        return;
    }
    int n = ptr->data;
    return(n + getsum(ptr->next));
}

void linkedlist::writeInorder(string & file) {

}

void linkedlist::writeReversed(string & file) {
    // RECURSIVE
}