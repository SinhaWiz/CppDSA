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
Node * findMin(Node * root){
    while (root->left!=NULL){
        root = root->left;
    }
    return root;
}
Node * remove(Node * root ,int data){
    if(root == NULL){
        return NULL;
    }
    else if(data <root->key){
        root->left =remove(root->left , data) ;
    }
    else if(data >root->key){
        root->right =remove(root->right , data) ;
    }
    else{
        //for no children (leaf nodes)
        if(root -> left == NULL and root->right== NULL ){
            delete root ;
            root = NULL;
        }
        //Single child
        else if(root->left == NULL  ){
            Node * temp = root ;
            root = root -> right;
            delete temp;
        }
        else if(root->right == NULL ){
            Node * temp = root ;
            root = root ->left;
            delete temp;
        }
        //2 child
        else{
            Node * temp =findMin(root->right);
            root->key = temp ->key;
            root->right = remove(root->right,temp->key);

        }
    }
    return root;
}
int main(){
Node * root = NULL;
int arr[] = {8 , 3 , 10 , 1 , 6 , 14 , 4 ,7 , 13};
for(int  x: arr){
    root = insert(root , x);
}
printInOrder(root);
int key ;
cin>>key;
root = remove(root,key);
printInOrder(root);
    return 0;
}