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

Node* rotateLL(Node* head ,  int k){
        Node* tail = head;
        int size = 1;
        while(tail->next != nullptr){
            tail=tail->next;
            size++;
        }

        tail->next = head;
        k = k % size;
        Node* temp = head;
        for(int i = 1 ; i<= k ;i++){
            temp = temp->next;
        }
        head = temp->next;
        temp->next = nullptr;

        return head;
}

void printLL(Node* root){
        while(root != nullptr){
        cout << root->val << " ";
        root = root->next;
    }
        cout << endl;
}
int main() {
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

    printLL(root);

    Node* res = rotateLL(root,2);
    printLL(res);

    
    return 0;
}