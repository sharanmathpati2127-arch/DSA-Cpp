#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data1){
        data=data1;
        next=nullptr;
    }

};

node* convertArr2LL(vector<int> &arr){
    node* head=new node(arr[0]);
    node* mover=head;

    for(int i=1;i<arr.size();i++){
        node* temp=new node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

int length(node* head){
    int count=0;
    node* temp=head;
        while(temp!=nullptr){
        temp=temp->next;
        count++;
    }
    return count;
}


int check(node* head,int val){
     node* temp=head;
        while(temp!=nullptr){
            if(temp->data==val){
                return 1;
            }
            temp=temp->next;
    }
    return 0;
    
}
int main(){
    vector<int> arr={3,6,1,8,9};
    node* head=convertArr2LL(arr);
    cout<<head->data<<endl;
    node* temp1=head;

    while(temp1!=nullptr){
        cout<<temp1->data;
        temp1=temp1->next;
    }
    cout<<endl;

    cout<<"length is="<<length(head)<<endl;
    cout<<(check(head,1))<<endl;

    return 0;
    
}