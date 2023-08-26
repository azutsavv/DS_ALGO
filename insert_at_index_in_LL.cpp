#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

};
Node* head;


void Create(int Arr[],int size){
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

// insert at a given index

void Insert_at_index(Node* P,int key,int pos){
    Node* q=new Node;
    q->data=key;
    
    for (int i = 0; i<pos-1 && P; i++)
    {
        P=P->next;
    }
    q->next=P->next;
    P->next=q;
    
    
}
void Display(Node* P){
    while (P!=nullptr)
    {
        cout<<P->data<<"->";
        P=P->next;
        
    }
}

int main(){

    int A[]={1,2,3,4,5,6};
    int size=(sizeof(A)/sizeof(A[0]));
    
    Create(A,size);
    Insert_at_index(head,7,6);
    Insert_at_index(head,8,7);
    Insert_at_index(head,9,8);

    Display(head);

    return 0;
        


}