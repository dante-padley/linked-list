//begin linkedlist.h
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <string>

using namespace std;

struct node {
    int data;
    node * next = nullptr;
};

class linkedlist {
private:
    node * head;
    int count(); // RECURSIVE
    int getcount(node * ptr);
    int sum(); // RECURSIVE
    int getsum(node * ptr);
    node * findNodeDest(int n);
    void insert(node * ptr, int n);

public:
    linkedlist();
    ~linkedlist(); // RECURSIVE

    void addToFront(int n); 
    void addToBack(int n);
    void addinOrder(int n);
    double average(); // uses sum and count functions
    void writeInorder(string & file);
    void writeReversed(string & file);
};
#endif // end linkedlist.h