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
void levelOrderPrint(Node * root){
    queue <Node * > q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node * temp = q.front();
        if(temp == NULL){
            cout<<endl;
            q.pop();
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else {
        q.pop();
        cout<<temp->data<<"  ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
        }
    }
    return;
}
int heightOfTree(Node * root){
    if(root == NULL){
        return 0;
    }
    int h1 = heightOfTree(root->left);
    int h2 = heightOfTree(root->right);
    return max(h1,h2) +1 ;

}
int diameter(Node * root){
    // O(N^2) time complexity (not an optimal way)
    if(root == NULL){
        return 0;
    }
    int D1 = heightOfTree(root->left)+ heightOfTree(root->right);
    int D2 = diameter(root->left);
    int D3 = diameter(root->right);
    return max(D1,max(D2,D3));

}
int main(){
 Node * root = buildTree();
 //input : 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
 levelOrderPrint(root);
 cout<<"Diameter is :   "<< diameter(root)<<endl;
    return 0;
}