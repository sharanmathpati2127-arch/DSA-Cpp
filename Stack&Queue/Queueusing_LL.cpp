#include<iostream>;
using namespace std;

// TC=O(1)   SC=O(1)

class LinkedListQueue {
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
node* start;
node* end;

    LinkedListQueue() {
        start=nullptr;
        end=nullptr;
    }
    
    void push(int x) {
        node* newnode=new node(x);
        if(start==nullptr && end==nullptr){
            start=newnode;
            end=newnode;
        }
        else{
            end->next=newnode;
            end=newnode;
        }
   
    }
    
    int pop() {
        if(start==nullptr && end==nullptr){
            return -1;
        }
        else{
            node* temp=start;
            int val=temp->data;
            start=start->next;
            if(start==nullptr){
                end=nullptr;
            }
            delete temp;
            return val;
        }
  
    }
    
    int peek() {
        if(start==nullptr && end==nullptr){
            return -1;
        }
        else{
            node* temp=start;
            int val=temp->data;
            return val;
        }
    }
    
    bool isEmpty() {
        return (start==nullptr && end==nullptr);
  
    }
};