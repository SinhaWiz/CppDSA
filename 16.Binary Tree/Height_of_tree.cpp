#include <bits/stdc++.h>
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

int heightOfTree(Node * root){
    if(root == NULL){
        return -1;
    }
    int h1 = heightOfTree(root->left);
    int h2 = heightOfTree(root->right);
    return max(h1,h2) +1 ;

}
int main(){

    return 0;
}
