#ifndef SKIPLIST_SKIPLIST_H
#define SKIPLIST_SKIPLIST_H
#include "Node.h"

using namespace std;

class SkipList
{
private:
    Node* head;
    int Level;

public:
    SkipList();

    void insert(int data);  // To insert the value
    void remove(int data);  // To delete the value
    bool search(int data);  // To search for a value
    void display();         // Function to display a skip List

};

#endif //SKIPLIST_SKIPLIST_H
