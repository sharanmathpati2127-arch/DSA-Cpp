#include<iostream>;
#include<queue>;
using namespace std;


// TC=O(n)   SC=O(n)
class MyStack {
public:
queue<int> q;
int size;

    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);

        int s=q.size();
        for(int i=0;i<s-1;i++){
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        if(q.empty()){
            return -1;
        }
        int val=q.front();
        q.pop();
        return val;
    }
    
    int top() {
        if(q.empty()){
            return -1;
        }
        
        return q.front();
    }

    
    bool empty() {
        return q.empty();
        
    }
};