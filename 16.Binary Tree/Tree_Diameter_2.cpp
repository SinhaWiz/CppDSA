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
// O(N) time complexity **Optimized Method**
class HDpair{
    public:
        int height ;
        int diameter;       
};
HDpair optDiameter(Node * root){
            HDpair p ;
            if(root == NULL){
                p.height = p.diameter = 0;
                return p;
            }
            HDpair Left = optDiameter(root->left);
            HDpair Right = optDiameter(root->right);
            p.height = max(Left.height,Right.height)+1;
            int D1 = Left.height + Right.height;
            int D2 = Left.diameter;
            int D3 = Right.diameter;
            p.diameter = max(D1,max(D2,D3));
            return p;
        }
int main(){
Node * root = buildTree();
cout<<"Diameter is :  "<<diameter(root)<<endl;
cout<<"Diameter is :  "<<optDiameter(root).diameter<<endl;
    return 0;
}