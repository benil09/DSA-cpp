#include <iostream>
using namespace std;

//

struct Node
{
    int data;
    Node *prev;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = nullptr;
        prev = nullptr;
    }
};

int main()
{   
    Node* d1=new Node(5);
    Node* head=d1;
    cout<< head->data <<endl;
    cout<< d1->data  << " " << d1->next << " " << d1->prev << " " << endl;

    return 0;
}