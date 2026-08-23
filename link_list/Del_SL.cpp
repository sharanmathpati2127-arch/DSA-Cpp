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


// convert arr to LL:
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


// Delete Head:
node* DelHead(node* head){
    if(head==NULL) return head;
    node* temp=head;
    head=head->next;
    delete temp;
    return head;
}


// delete tail:
node* Deltail(node* head){
    node* temp=head;
    if(head==NULL || head->next==NULL) return NULL;

    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    return head;
}


// delete element at kth element:
node* DelKth(node* head,int k){
    if(head==NULL) return NULL;
    node* temp=head;
    node* prev=NULL;
    int count=0;
    while(temp!=NULL){
        count=count+1;
        if(count==k){
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
        
    }
    return head;
}


void print(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
    vector<int> arr={34,12,67,45,89};
    node* head=convertArr2LL(arr);
    // head=DelHead(head);

    // head=Deltail(head); 

    head=DelKth(head,2);
    print(head);


    return 0;
}
