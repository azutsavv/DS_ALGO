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

// insert at tail

void Insert_in_sorted_LL(int key){
    Node* last;
    Node* current;
    Node* temp = new Node;
    temp->data=key;
    current=head;
    
    while (current&&current->data<key)
    {
        last=current;
        current=current->next;
    }
    temp->next=current;
    last->next=temp;
    
}
   
void Display(Node* P){
    while (P!=nullptr)
    {
        cout<<P->data<<"->";
        P=P->next;
        
    }
}

int main(){
    int A[]={1,3,5,7,9,11,13,15};
    int space = (sizeof(A)/sizeof(A[0]));
    Create(A,space);
    Display(head);
    cout<<endl;

    Insert_in_sorted_LL(2);
    Display(head);
    cout<<endl;
    return 0;
}