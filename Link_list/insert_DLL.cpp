#include<bits/stdc++.h>
using namespace std;


class node{
    public:
    int data;
    node* next;
    node* back;

    node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
    node(int data1,node* next1,node* back1){
        data=data1;
        next=next1;
        back=back1;
    }

};

node* convertArrtoDLL(vector<int> &arr){
    node* head=new node(arr[0],nullptr,nullptr);
    node* back=head;

    for(int i=1;i<arr.size();i++){
        node* temp=new node(arr[i],nullptr,back);
        back->next=temp;
        back=temp;
    }
    return head;
}


// before head:
node* inserthead(node* head,int val){
    node* newnode=new node(val,nullptr,nullptr);
    newnode->next=head;
    head->back=newnode;
    head=newnode;
    return head;
}

// before tail
node* inserttail(node* head,int val){
    node* newnode=new node(val,nullptr,nullptr);
    node* temp=head;
    if(temp->next=nullptr){
        return inserthead(head,val);
    }
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->back->next=newnode;
    newnode->back=temp->back;
    temp->back=newnode;
    newnode->next=temp;
    return head;

}

node* insertKthpos(node* head,int val,int k){
    if(k==1){
        return inserthead(head,val);
    }
    node* newnode=new node(val,nullptr,nullptr);
    int count=0;
    node* temp=head;
    while (temp!=nullptr)
    {
        count++;
        if(count==k){
            break;
        }
        temp=temp->next;
    }
    temp->back->next=newnode;
    newnode->back=temp->back;
    temp->back=newnode;
    newnode->next=temp;
    return head;
    
}

// before node val
node* insertNode(node* head,int key,int val){
    node* newnode=new node(val,nullptr,nullptr);
    node* temp=head;

    while(temp!=nullptr){
        if(temp->data==key){
            break;
        }
        temp=temp->next;
    }
    temp->back->next=newnode;
    newnode->back=temp->back;
    temp->back=newnode;
    newnode->next=temp;
    return head;
}

void print(node* head){
    node* temp=head;

    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    vector<int> arr={6,2,9,1,7,5};
    node* head=convertArrtoDLL(arr);

    // head=inserthead(head,8);

    // head=inserttail(head,9);

    // head=insertKthpos(head,10,1);

    head=insertNode(head,6,1);
    print(head);

}