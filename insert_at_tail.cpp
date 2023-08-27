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

void Insert_at_tail(int key){
    Node* last;
    Node* temp = new Node;
    temp->data=key;
    temp->next= NULL;

    if (head==NULL)
    {
        head=last=temp;
    }
    else{
        last->next=temp;
        last=temp; 
    }
    
}
   
void Display(Node* P){
    while (P!=nullptr)
    {
        cout<<P->data<<"->";
        P=P->next;
        
    }
}

int main(){
    Insert_at_tail(1);
    Insert_at_tail(2);
    Insert_at_tail(3);
    Insert_at_tail(4);
    Insert_at_tail(5);
    Insert_at_tail(6);
    Display(head);
    return 0;
}