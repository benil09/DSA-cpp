#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

int main()
{
    Node *node = new Node(15);
    // node->data = 5;
    cout << node->data << endl; // This will print an uninitialized value
    cout << node->next << endl; // This will also print an uninitialized value

    Node *node2=new Node(16);
    node2->next = node;

    cout << node2->data << endl; // This will print 16
    cout << node2->next->data << endl; // This will print 15

    return 0;
}