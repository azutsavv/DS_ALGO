#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

};
Node* head=NULL;


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

// insert from the circular LL

void insert_circular_LL(int key, int pos){

    Node *p,*q;

    if (pos==0)
    {   p= new Node;
        p->data=key;

        if (head == NULL)
        {
            p->next=head;
            head=p;
        }
        
    }
    else{
        p=head;
        for (int i = 0; i < pos-1; i++)
        {
            p=p->next;
        }
        q=new Node;
        q->data=key;
        q->next=p->next;
        p->next=q;
        

    }


}



void Display(Node* P){
    Node *q=P;
   do
   {
    cout<<q->data<<"->";

   } while (q!=P);
   
   cout<<endl;
}

int main(){

    int A[]={1,2,3,4,5};
    int size=(sizeof(A)/sizeof(A[0]));
    Create(A,size);
    insert_circular_LL(2,0);
    Display(head);

    return 0;
}