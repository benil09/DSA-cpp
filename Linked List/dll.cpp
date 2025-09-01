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

void print(Node *&head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void insertAtHead(Node *&head, int data)
{
    Node *newNode = new Node(data);
    Node *temp = newNode;
    temp->next = head;
    head->prev = newNode->next;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    Node *newNode = new Node(d);
    Node *temp = newNode;
    temp->prev = tail;
    tail->next = temp;
    tail = temp;
}

int main()
{
    Node *d1 = new Node(5);
    Node *head = d1;
    Node *tail = d1;

    insertAtHead(head, 4);
    insertAtHead(head, 3);
    insertAtHead(head, 2);
    insertAtHead(head, 1);

    insertAtTail(tail, 6);
    insertAtTail(tail, 7);
    insertAtTail(tail, 8);

    print(head);

    return 0;
}