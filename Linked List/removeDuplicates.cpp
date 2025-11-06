#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void printLL(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void removeDuplicates(Node *&head)
{
    if (head == NULL)
        return;
    Node *curr = head;

    while (curr != NULL)
    {
        if ( curr->next!=NULL && curr->data == curr->next->data)
        {
            Node* temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        }
        else{
            curr=curr->next;
        }
    }    
}

int main()
{
    Node *n1 = new Node(5);
    Node *head = n1;

    Node *n2 = new Node(10);
    n1->next = n2;

    Node *n3 = new Node(10);
    n2->next = n3;
    Node *n4 = new Node(10);
    n3->next = n4;

    Node *n5 = new Node(15);
    n4->next = n5;
    Node *n6 = new Node(15);
    n5->next = n6;

    cout << "LL before removing duplicate elements : ";
    printLL(head);
    cout << endl;

    cout << "LL after removing duplicate elements : ";
    removeDuplicates(head);
    printLL(head);

    return 0;
}