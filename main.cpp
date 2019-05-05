#include <iostream>
#include <fstream>
#include <string>
#include "linkedlist.cpp"

using namespace std;

void readFile(linkedlist & list, string & file) {
    ifstream in;
    in.open(file);
    int n;
    while(in >> n){
        cout << "this is n: " << n << endl;
        list.addinOrder(n);
    }
}

int main() {

    linkedlist list;
    string file = "list.txt";
    readFile(list, file);


    return 0;
}