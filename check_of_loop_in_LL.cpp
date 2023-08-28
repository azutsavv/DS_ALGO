#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

};
Node* LL1;

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


int isloop(Node* f){
Node *p,*q;
p=q=f;

do{
    p=p->next;
    q=q->next;
    q=q?q->next:q; // checking if q has become null or not
}while ( p&&q && p!=q);

if (p==q)
{
    return 1;
}
else
return 0;



}


void Display(Node* P){
    while (P!=nullptr)
    {
        cout<<P->data<<"->";
        P=P->next;
        
    }
}

int main(){

    Node *t1,*t2;
    int A[]={1,2,3,4,5};
    int size1=(sizeof(A)/sizeof(A[0]));
    Create(LL1,A,size1);
   //making a looped linkde list
    t1=LL1->next->next;
    t2=LL1->next->next->next->next;
    t2->next=t1;

    // checking it by a fuction

    cout<<isloop(LL1);

   
    

    return 0;
}