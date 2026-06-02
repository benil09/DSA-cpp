#include <iostream>
using namespace std;
class Node{
   public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};


void LevelOrderTraversal(Node* root){
     queue<Node*> q;
     q.push(root);

    
     while(!q.empty()){
        Node* curr = q.front();
        q.pop();
        cout << curr->data << " ";
        if(curr ->left ) q.push(curr->left);
        if(curr ->right ) q.push(curr->right);
     }
}
int main() {
    Node* root = new Node(2);
    root->left = new Node(8);
    root->right = new Node(4);
    root->left->left = new Node(3);
    root->left->right = new Node(7);
    root->right->right = new Node(1);
    root->right->right->right = new Node(6);

    cout << "Level Order Traversal : " ;
    LevelOrderTraversal(root);
    
    return 0;
}