#include<iostream>
#include<stack>
using namespace std;

//TC=O(1)   SC=O(2n)
class sta{
    public:
    stack<pair<int,int>> st;

    void push(int val){
        if(st.empty()){
            st.push({val,val});
        }
        else{
            st.push({val,min(val,st.top().second)});
        }
    }

    void getmin(){
        cout<<st.top().second;
    }
    int top(){
        return st.top().first;
    }
    void pop(){
        st.pop();
    }
};
int main(){
    sta s;
    s.push(10);
    s.push(6);
    s.push(34);
    s.push(20);

    s.getmin();

    return 0;

}