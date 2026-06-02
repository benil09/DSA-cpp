#include <iostream>
#include<vector>
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

Node* preOrder(vector<int>& arr , int &idx){
    idx++;
    if(arr[idx] == -1) return NULL;

    Node* root = new Node(arr[idx]);

    root->left = preOrder(arr,idx);
    root->right = preOrder(arr,idx);
    return root;
}
Node* postOrder(vector<int>& arr , int &idx){
    idx++;
    if(arr[idx] == -1) return NULL;

    Node* root = new Node(arr[idx]);
   

    root->left = postOrder(arr,idx);
    root->right = postOrder(arr,idx);
    return root;
}
Node* InOrder(vector<int>& arr , int &idx){
    idx++;
    if(arr[idx] == -1) return NULL;

   

    root->left = InOrder(arr,idx);
    Node* root = new Node(arr[idx]);
    root->right = InOrder(arr,idx);
    return root;
}

int main() {
   vector<int> arr = {1, 2, -1, -1, 3, -1, -1};
   int idx = -1;

   Node* root = preOrder(arr, idx);
    return 0;
}