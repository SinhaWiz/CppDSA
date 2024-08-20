#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int key;
    Node * left ;
    Node * right;
    Node(int key){
        this->key = key;
        left = right = NULL;
    }
};
Node * insert(Node * root , int key){
    if(root == NULL){
        return new Node(key);
    }
    if( key < root -> key){
        root -> left = insert(root->left , key);
    }
    else{
        root->right = insert(root->right ,key);
    }
    return root;
}
bool search(Node * root , int value){

    if(root == NULL ){
        return false;
    }
    if(root->key == value){
        return true;
    }
    if( value < root->key){
        return search(root->left , value);
    }
        return search(root->right , value);
}
void printInOrder(Node * root){
    if (root == NULL){
        return ;
    }
    printInOrder(root->left);
    cout<<root->key<<" " ;
    printInOrder(root->right);
}
int main(){
Node * root = NULL;
int arr[] = {8 , 3 , 10 , 1 , 6 , 14 , 4 ,7 , 13};
for(int  x: arr){
    root = insert(root , x);
}
// printInOrder(root);
cout<<search(root  , -1);
    return 0;
}