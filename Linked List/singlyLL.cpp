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

    ~Node(){
        int value = this->data;
        //memory free
        if(this->next != nullptr){
            delete next;
            this->next=nullptr;
        }
        cout<<" memory is free for node with data : " << value << endl;
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

void deleteNode(Node* &head,int pos){
    //delete first node
    if(pos==1){
        Node* temp=head;
        head=head->next;
        delete temp;
    }else{
        //delete last of middle node

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
   
    deleteNode(head,1);
    
    print(head);
    return 0;
}