#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Node{
    public:
     int data;
     Node* left;
     Node* right;

     Node(int d){
        data=d;
        left=NULL;
        right=NULL;
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

void preOrderTraversal(Node* root){     // NLR
        if(root == NULL) return ;
        cout << root->data<< " ";
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
        
        

}
void postOrderTraversal(Node* root){    // LRN
        if(root == NULL) return;
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        cout << root->data<< " ";

}
void inOrderTraversal(Node* root){      // LNR
        if(root == NULL) return;
        inOrderTraversal(root->left);
        cout << root->data<< " ";
        inOrderTraversal(root->right);      
}


void levelOrderTraversal(Node* root){
    queue<Node*>q;
    q.push(root);

    while(q.size()>0){
        Node* curr = q.front();
        q.pop();

        cout << curr->data << " ";

        if(curr->left !=NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);

        }
    }

}

int main() {
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    int idx = -1;
    Node* root = buildTree(idx , preorder);
    // cout<< root->data <<endl;
    // cout<< root->left->data <<" ";
    // cout<< root->right->data <<endl;
    // cout<< root->right->left->data <<" ";
    // cout<< root->right->right->data <<endl;
    cout << "Preorder : " ;
    preOrderTraversal(root);
    cout << endl;
    cout << "Postorder : " ;
    postOrderTraversal(root);
    cout << endl;

    cout<<"inorder : ";
    inOrderTraversal(root);
    



    
    return 0;
}