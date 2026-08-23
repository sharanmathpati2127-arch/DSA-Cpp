#include<iostream>
using namespace std;

class node
{
   public:
   int data;
   node* next;

   node(int data1,node* next1){
    data=data1;
    next=next1;
   }
};

int main(){
    int arr[5]={1,2,3,4,5};
    node* y=new node(arr[3],nullptr);
    cout<<y;

    return 0;
}
