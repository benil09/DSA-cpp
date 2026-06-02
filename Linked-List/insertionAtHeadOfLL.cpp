#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    //constructor
    Node(int d){
        this->val = d;
        this->next = nullptr;
    }
};

void printLL(Node* root){
        while(root != nullptr){
        cout << root->val << " ";
        root = root->next;
    }
        cout << endl;
}

int main() {
    // construct a singly linked list
    Node* n1 = new Node(1);
    Node* root = n1;
    Node* n2 = new Node(2);
    n1->next = n2;
    Node* n3 = new Node(3);
    n2->next = n3;
    Node* n4 = new Node(4);
    n3->next= n4;
    Node* n5 = new Node(5);
    n4->next = n5;

    // traverse a singly linked list
    printLL(root);


    // insert node at start in singly linked list
    Node* n0 = new Node(0);
    n0->next = n1;
    root = n0;
    printLL(root);
    // insert a node at the end of the LL
    Node* n6 = new Node(6);
    n5->next=n6;
    printLL(root);

    // delete a node from start of the LL
    Node* delStart  = root;
    root = root->next;
    delete delStart;
    printLL(root);

    // delete a node from the end of the LL
    Node* temp = root;
    while(temp != nullptr){
        if(temp -> val == 6){
            n5->next = nullptr;
        }
        temp = temp->next;
    }
    printLL(root);

    // delete a node from the middle i.e delete the node whose value is 3;
    Node* temp1 = root;
    while(temp1!=nullptr){
        if(temp1->val == 3){
            n2->next = n4;
        }
        temp1 = temp1->next;
    }
    printLL(root);
    
    // count the length of a LL
    int count = 0;
    while( root!= nullptr ){
        count = count+1;
        root= root->next;
    }
    cout << "the length of the LL is " << count << endl;

    return 0;
}