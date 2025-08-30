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
        this->next = nullptr;
    }
};

void insertAtTop(Node* &head,int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;

}
void insertAtEnd(Node* &tail,int data){
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;
}
void print(Node* head){
    Node* temp = head;
    while(temp!=nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *node1 = new Node(15);
    Node *head = node1;
    Node* tail = node1;
    
    Node* n2 = new Node(10);
    n2->next=head;
    head=n2;

    Node* n3 = new Node(5);
    n3->next=head;
    head=n3;


    insertAtEnd(tail,20);

    Node* n5=new Node(25);
    tail->next=n5;
    tail=n5;
   
    
    print(head);
    return 0;
}