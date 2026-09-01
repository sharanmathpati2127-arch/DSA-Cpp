#include<iostream>;
using namespace std;


// TC=O(1)   SC=O(1)
class LinkedListStack {
public:
class node{
    public:
    int data;
    node* next;

    node(int data1){
        data=data1;
        next=nullptr;
    }
};
node *t;

    LinkedListStack() {
        t=nullptr;
    }
    
    void push(int x) {
        node* newnode=new node(x);
        newnode->next=t;
        t=newnode;
    }
    
    int pop() {
        if(t==nullptr){
            return -1;
        }
        node* temp=t;
        int val=temp->data;
        t=t->next;
        delete temp;
        return val;
    }
    
    int top() {
        if(t==nullptr){
            return -1;
        }
        return t->data;
    
    }
    
    bool isEmpty() {
        return t==nullptr;
  
    }
};