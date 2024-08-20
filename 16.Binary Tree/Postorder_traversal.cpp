#include  <bits/stdc++.h>
using namespace std;
class Node{
public :
    int data ;
    Node * left ;
    Node * right;
    Node(int d){
        data = d;
        left = right = NULL;
    }
};
// class Tree{
//     Node * root;
//     //methods
// };
Node * buildTree(){
int d ;
cin>>d;
if(d==-1){
    return NULL;
}
 Node * n = new Node(d);
 n->left = buildTree();
 n->right = buildTree();
 return n;
}
/// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
void printPreorder(Node * root){
    if(root == NULL)
    {
        return ;
    }
    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
}
/// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
void printInorder(Node * root){
    if(root == NULL)
    {
        return ;
    }
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}
/// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
void printPostOrder(Node * root){
 if (root == NULL)
 {
    return ;
 }
 printPostOrder(root->left);
 printPostOrder(root->right);
 cout<<root->data<<" ";
}
int main(){
   // input input: 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
   // output preorder:1 2 4 5 7 3 6
   // output inorder :4 2 7 5 1 3 6 
    Node * root = buildTree();
    cout<<"PreOrder   : ";
    printPreorder(root);
    cout<<endl;
    cout<<"InOrder    : ";
    printInorder(root);
    cout<<endl;
    cout<<"PostOrder  : ";
    printPostOrder(root);
    cout<<endl;
return 0;
}