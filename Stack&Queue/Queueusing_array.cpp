#include<iostream>;
using namespace std;


// TC=O(1)   SC=O(1)
class ArrayQueue {
public:
int size;
int start;
int end;
int qu[100];
    ArrayQueue() {
        size=0;
        start=-1;
        end=-1;
    }
    
    void push(int x) {
        if(end==-1 && start==-1){
            end=0;
            start=0;
            qu[end]=x;
        }
        else{
            end=(end+1)%100;
            qu[end]=x;
            size++;
        }
   
    }
    

    int peek() {
        if(start==-1 && end==-1){
            return -1;
        }
        int val=qu[end];
        return val;
    
    }
    
    bool isEmpty() {
        return size==0;
  
    }
};