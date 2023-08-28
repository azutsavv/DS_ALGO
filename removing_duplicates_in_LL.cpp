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

void no_duplicates(){
    Node* P=head;
    Node* q=head->next;
    while (q!=NULL){
        if(P->data!=q->data){
          P=q;
          q=q->next; 
        }
        else
        {
            P->next=q->next;
            delete q;
            q=P->next;
        }
        
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

    int A[]={2,1,3,5,5,6,7,7,8};
    int size=(sizeof(A)/sizeof(A[0]));
    
    Create(A,size);
    Display(head);
    cout<<endl;
    no_duplicates();
    cout<<endl;
    Display(head);
    

    return 0;
}