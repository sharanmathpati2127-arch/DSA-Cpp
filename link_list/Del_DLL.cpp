#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int data1){
        data=data1;
        next=nullptr;
        prev=nullptr;
    }

    node(int data1 ,node* next1,node* prev1){
        data=data1;
        next=next1;
        prev=prev1;
    }


};

// conversion:
node* convertArr2DLL(vector<int> &arr){
    node* head=new node(arr[0],nullptr,nullptr);
    node* prev=head;

    for(int i=1;i<arr.size();i++){
        node* temp=new node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}


// del head:
node* delHead(node* head){
    if(head==nullptr) return NULL;
    node* temp=head;

    head=head->next;

    if (head != nullptr) {
    head->prev = nullptr;
}
    temp->next=nullptr;
    delete temp;
    return head;
}

// Del tail:
node* DelTail(node* head){
    if(head==nullptr) return NULL;
    node* temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->prev->next=nullptr;
    temp->prev=nullptr;
    delete temp;
    return head;
}


// del kth ele:
node* DelKthel(node* head,int k){
    node* temp=head;
    int count=0;
    while(temp!=nullptr){
        count++;
        if(count==k){
    
            break;;
        }
        temp=temp->next;
}
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        temp->next=nullptr;
        temp->prev=nullptr;

        delete temp;
        return head;
}
void print(node* head){
    node* temp=head;
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}

}
int main(){
    vector<int> arr={6,4,2,8,9,1,4};
    node* head=convertArr2DLL(arr);
    // head=delHead(head);

    // head=DelTail(head);

    head=DelKthel(head,3);
    print(head);



    return 0;
}
