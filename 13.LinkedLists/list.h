#include<bits/stdc++.h>
using namespace std;
class Node{
 
 int data;
 public:
    Node * next;
    friend class List;
    Node(int d):data(d),next(NULL){}
    int getData(){
    return data;
 }
//  ~Node(){
//     if(next!=NULL){
//         delete next;
//         cout<<"deleting node with data "<< data << endl;
//     }
//  }
};
class List{
    Node * head ; 
    Node * tail ;
    int searchHelper(Node * start , int key ){
        if(start == NULL){
            return -1;
        }
        if(start->data == key)
        {
            return 0;
        }
        int subIndex = searchHelper(start->next ,key);
        if(subIndex==-1){
            return -1;
        }
        return subIndex+1;
    }
public:
    List():head(NULL),tail(NULL){}
    Node * begin(){
        return head;
    }

    void push_back (int data){
        if(head==NULL){
            Node * n = new Node(data);
            head = tail =n;
        }
        else{
            Node * n = new Node (data);
            tail->next = n;
            tail = n;
        }
    }


    void push_front(int data){
                if(head == NULL){
                    Node * n  = new Node(data);
                    head = tail = n;
                    return ;
                }
                else{
                    Node * n = new Node(data);
                    n->next = head;
                    head = n ;
                }
    }


    void pop_back(){

    }


    void remove(){

    }


    void insert(int data , int pos){
        if(pos==0){
            push_front(data);
            return ;
        }
        Node * temp = head;
        for(int jump = 1 ; jump <= pos -1 ; jump++){
            temp = temp->next;
        }
        Node * n = new Node (data);
        n->next  = temp->next;
        temp->next = n;
    }


    void pop_front(){
        Node * temp = head;
        head = head->next;
        temp->next = NULL;
    }


    bool search(Node * head , int key){
        Node * temp  = head; 
        while(temp!=NULL){
        if(head->data == key)
        {
            return true;
        }
        head = head->next;
        }
        return false;
    }


    bool searchRecursive(Node * head , int key){
    if(head == NULL){
            return false ;
        }
    
    if(head->data == key){
            return true;
        }
        else{
            return searchRecursive(head->next , key);
        }
    }
    int search(int key){
            Node * temp = head;
            int index = 0;
            while(temp!=NULL){
                if(temp->data==key){
                    return index;
                }
                index++;
                temp = temp->next;
            }
            return -1;
    }
    int recursiveSearch(int key){
            int index = searchHelper(head , key);
            return index;
    }

    void reverse(Node *&head){
        Node * Cur = head;
        Node * Pre =NULL;
        Node * N   ;
        while(Cur!=NULL){
            N = Cur->next;
            Cur->next=Pre;
            Pre = Cur;
            Cur = N;
        }
        head =Pre;
    }
// ~List(){
//     if(head!=NULL){
//         delete head;
//         head = NULL;
//     }
// }

};