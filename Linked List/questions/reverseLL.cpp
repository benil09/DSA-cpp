#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

void recursiveReverse(Node *head, Node *curr, Node *prev)
{
    // base case
    if (curr == NULL)
    {
        head = prev;
        return;
    }

    Node *forward = curr->next;
    recursiveReverse(head, forward, curr);
    curr->next = prev;
}

Node *reverseLL(Node *head)
{
    Node *prev = nullptr;
    Node *curr = head;
    Node *forward = curr;

    while (curr != nullptr)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev; // new head
}

int main()
{
    Node *n1 = new Node(5);
    Node *head = n1;

    Node *n2 = new Node(10);
    n1->next = n2;

    Node *n3 = new Node(15);
    n2->next = n3;

    Node* curr = head;
    Node* prev=NULL;

    cout << "Original List : ";
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

   //head = reverseLL(head);
   recursiveReverse(head,curr,prev);

    cout << "Reversed List : ";
    temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}