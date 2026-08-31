#include<iostream>;
#include<stack>;
using namespace std;

// TC=O(2n)   SC=O(2n)
class MyQueue {
public:
stack<int> st1;
stack<int> st2;
int size1;
int size2;
    MyQueue() {
        size1=st1.size();
        size2=st2.size();
    }
    
    void push(int x) {
    // st1 ke elements st2 mein
    while(!st1.empty()){
        st2.push(st1.top());
        st1.pop();
    }

    // new element
    st1.push(x);

    // st2 ke elements wapas st1 mein
    while(!st2.empty()){
        st1.push(st2.top());
        st2.pop();
    }
}
    
    int pop() {
        if(st1.empty()){
            return -1;
        }
        int val=st1.top();
        st1.pop();
        return val;
    }
    
    int peek() {
        if(st1.empty()){
            return -1;
        }
        return st1.top();
        
    }
    
    bool empty() {
        return st1.empty();
        
    }
};