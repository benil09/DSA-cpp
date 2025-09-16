#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

//approach-1 // using double loop
void removeDuplicateFromUnsortedList(Node* &head){

}

void printLL(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    Node* n1=new Node(2);
    Node* head=n1;

    Node* n2 = new Node(3);
    n1->next=n2;

    Node* n3 = new Node(3);
    n2->next=n3;

    Node* n4= new Node(2);
    n3->next=n4;

    Node* n5= new Node(3);
    n4->next=n5;


    cout<<"LL before removing duplicates : ";
    printLL(head);

   // removeDuplicateFromUnsortedList(head);

    


    
    return 0;
}