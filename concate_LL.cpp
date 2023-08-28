#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

};
Node* LL1;
Node* LL2;

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

void concate(Node* P,Node* Q){
    while (P->next!=nullptr)
    {
        P=P->next;
    }
    P->next=Q;
    Q=nullptr;
    
}

void Display(Node* P){
    while (P!=nullptr)
    {
        cout<<P->data<<"->";
        P=P->next;
        
    }
}

int main(){

    int A[]={1,2,3,4,5,6,7,8};
    int B[]={8,7,6,5,4,3,2,1};
    int size1=(sizeof(A)/sizeof(A[0]));
    int size2=(sizeof(B)/sizeof(B[0]));
    
    Create(LL1,A,size1);
    Create(LL2,B,size2);
    Display(LL1);
    cout<<endl;
    Display(LL2);
    cout<<endl;
    concate(LL1,LL2);
    Display(LL1);
    cout<<endl;
   
    

    return 0;
}