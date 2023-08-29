#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node *prev;
    int data;
    Node *next;
};
Node *head;

create_dub_ll(int A[],int s){
    head=new Node;
    Node *temp;
    Node *last;

    head->prev= NULL;
    head->data=A[0];
    head->next=NULL;

    last=head;
    for (int i = 1; i < s; i++)
    {
        temp = new Node;
        temp->prev=head;
        temp->data=A[i];
        temp->next=NULL;

        last->next=temp;
        last=temp;
    }
    
}

Node display(Node *p){
    while (p!=NULL)
    {
        cout<<p->prev<<"-"<<p->data<<"-"<<p->next<<"->  ";
        p=p->next;
    }
    
}

int main(){
    int A[]={1,2,3,4,5};
    int size=(sizeof(A)/sizeof(A[0]));
    create_dub_ll(A,size);
    display(head);
}