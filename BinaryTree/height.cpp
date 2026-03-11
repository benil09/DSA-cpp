#include <iostream>
#include<vector>
using namespace std;

class Node{
   public: 
    int data ;
    Node* left;
    Node* right;

    Node(int d){
        data = d;
        right = NULL;
        left=NULL;
    }
};

Node* buildTree(int &idx ,  vector<int> preOrder){
        idx++;
        if(preOrder[idx]==-1) return NULL;
        Node* root = new Node(preOrder[idx]);
        root->left = buildTree(idx , preOrder); //left
        root->right = buildTree(idx , preOrder); //right
        return root;
}

int height(Node* root){
    if(root == NULL){
        return 0;
    }

    int leftHt = height(root->left);
    int rightHt = height(root->right);

    return max(leftHt,rightHt)+1;

}

int TotalNodes(Node* root){
    if(root == NULL){
        return 0;
    }

    int nodeInLeft = TotalNodes(root->left);
    int nodeInRight = TotalNodes(root->right);
    return nodeInLeft+nodeInRight+1;

}

int totalSumOfNodes( Node* root){
    if(root == NULL) return 0;

    int leftSum=totalSumOfNodes(root->left);
    int rightSum=totalSumOfNodes(root->right);
    return leftSum+rightSum+root->data;

}

int main() {
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    int idx= -1 ;
    Node* root = buildTree(idx,preorder);

   int heightOfTree =  height(root);
   cout << "Height : "<< heightOfTree<<endl;

   cout << "Total Nodes : "<< TotalNodes(root)<<endl;
   cout << "Total Sum : "<< totalSumOfNodes(root)<<endl;


   
    
    return 0;
}