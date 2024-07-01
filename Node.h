#ifndef SKIPLIST_NODE_H
#define SKIPLIST_NODE_H
#include <vector>

using namespace std;

const int maxNumberOfLevel = 5; // Maximum Level of the skip list

class Node
{
public:

    int data;
    vector<Node*> next;     // To maintain the levels of the skip list
    Node(int data, int Level) : data(data), next(Level + 1, nullptr) {} // declaring the data and the level of the node
};

#endif //SKIPLIST_NODE_H
