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
Node * levelOrderBuild(){
    int d;
    cin>>d;
     Node * root = new Node(d);
     queue<Node*>q;
     q.push(root);
     while(!q.empty()){
        Node*current = q.front();
        q.pop();
        int c1 ,c2;
        cin>>c1>>c2;
        if(c1!=-1){
            current->left = new Node(c1);
            q.push(current->left);
        }
        if(c2!=-1){
            current->right = new Node(c2);
            q.push(current->right);
        }

     }
     return root;
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
int main(){
//input : 1  2  3  4  5  -1  6  -1  -1  7  -1  -1  -1  -1  -1
Node * root = levelOrderBuild();
levelOrderPrint(root);


    return 0;
}