#include <iostream>
using namespace std;

struct Node {

    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

// void insert(int x){
//     if(x<=data){
//         if(left==NULL){
//             left = new Node(x);
//         }else{
//             left.insert(x);
//         }
//     }else if(x>data){
//         if(right==NULL){
//             right = new Node(x);
//         }else{
//             right.insert(x);
//         }
//     }
// }

void preOrder(struct Node* root){

    if(root==NULL){
        return;
    }

    cout<<root->data<<endl;
    preOrder(root->left);
    preOrder(root->right);

}

void inOrder(struct Node* root){

    if(root==NULL){
        return;
    }

    inOrder(root->left);
    cout<<root->data<<endl;
    inOrder(root->right);
}

void postOrder(struct Node* root){

    if(root==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<endl;
}
int main(){

    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5); 
    root->right->left = new Node(6);
    root->right->right = new Node(7);

   // preOrder(root);
   //inOrder(root);
   postOrder(root);
    
    return 0;
}