#include<iostream>;
using namespace std;


// TC=O(1)   SC=O(1)
class ArrayStack {
public:
    int size;
    int t;
    int qu[100];
    ArrayStack() {
        size=0;
        t=-1;
    }
    
    void push(int x) {
        t++;
        qu[t]=x;
        size++;
   
    }
    
    int pop() {
        if(size==0){
            return -1;
        }
        int val=qu[t];
        t=t-1;
        size--;
        return val;
  
    }
    
    int top() {
        if(size==0){
            return -1;
        }
        else{
            int val=qu[t];
            return val;
        }
    }
    
    bool isEmpty() {
        return size==0;
            
  
    }
};