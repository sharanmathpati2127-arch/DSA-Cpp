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


// insert head:
node* insertHead(node* head,int val){
    node* temp=new node(val);
    temp->next=head;
    return temp;
}


// insert tail:
node* insertTail(node* head,int val){
    if(head==NULL){
        return new node(val);
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    node* newnNode=new node(val);
    temp->next=newnNode;
    return head;
}

// insert At Kth pos:
node* insertKth(node*head,int k,int val){
    if(head==NULL){
        if(k==1) return new node(val);
        else return NULL;
}
    if(k==1){
        node* temp=new node(val);
        temp->next=head;
        return temp;
    }
    node* temp=head;
    node* prev=NULL;
    int count=0;
    while(temp!=NULL){
        count=count+1;
        if(count==k){
            node* newnode=new node(val);
            prev->next=newnode;
            newnode->next=temp;
            return head;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}


// Insert before Val
node* insertBeforeValue(node*head,int val,int el){
    if(head==NULL){
         return NULL;
}
    if(head->data==val){
        node* temp=new node(el);
        temp->next=head;
        return temp;
    }
    node* temp=head;
    node* prev=NULL;
   
    while(temp!=NULL){
        if(temp->next->data==val){
            node* newnode=new node(el);
            newnode->next=temp->next;
            temp->next=newnode;
            return head;
        }
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
    // head=insertHead(head,79);
    
    // head=insertTail(head,50);

    // head=insertKth(head,3,88);

    head=insertBeforeValue(head,67,88);

    print(head);


    return 0;
}