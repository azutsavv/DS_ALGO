#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

};
Node* LL1;
Node* LL2;
Node* third;

void Create(Node* &head,int Arr[],int size){
    Node* temp;
    Node* last;

    head = new Node;
    head->data= Arr[0];
    head->next= nullptr;
    
    last=head;
    
    // creating linked list

    for(int i=1;i<size;i++ ){
        temp = new Node;

        temp->data=Arr[i];
        temp->next=nullptr;

        last->next=temp;
        last=temp;

    } 
    
}

void merge(Node* P,Node* Q){
  Node* last;
  if (P->data<Q->data)
  {
    third=last=P;
    P=P->next;
    third->next=NULL;
  }
  else{
    third=last=Q;
    Q=Q->next;
    third->next=NULL;
  }
  while (P!=NULL&&Q!=NULL)
  {
    if (P->data<Q->data)
    {
        last->next=P;
        last=P;
        P=P->next;
        last->next=NULL;
    }
    else
    {
        last->next=Q;
        last=Q;
        Q=Q->next;
        last->next=NULL;
    }
    
  }
  if (P)
  {
    last->next=P;
  }
  if (Q)
  {
    last->next=Q;
  }
  
  
}

void Display(Node* P){
    while (P!=nullptr)
    {
        cout<<P->data<<"->";
        P=P->next;
        
    }
    cout<<endl;
}

int main(){

    int A[]={2,4,6,8,14};
    int B[]={1,3,9,13};
    int size1=(sizeof(A)/sizeof(A[0]));
    int size2=(sizeof(B)/sizeof(B[0]));
    
    Create(LL1,A,size1);
    Create(LL2,B,size2);
    Display(LL1);
    Display(LL2);
    merge(LL1,LL2);
    Display(third);
    return 0;
}