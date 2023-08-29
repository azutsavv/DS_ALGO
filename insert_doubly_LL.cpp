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

// insert at a given index

void Insert_at_index(Node* P,int key,int pos){
   if (pos < 0) {
        cout << "Invalid position\n";
        return;
    }

    Node* q = new Node;
    q->data = key;
    
    if(pos == 0){
        q->next = head;
        head->prev = q;
        head=q;
    }
    else{
        for (int i = 0; i < pos - 1 && P; i++) {
            P = P->next;
        }
        if (!P) {
            cout << "Invalid position\n";
            return;
        }
        q->next = P->next;
        q->prev=P;
        if(P->next){
            P->next->prev=q; 
        }
        P->next=q;
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

    int A[]={1,2,3,4,5,6};
    int size=(sizeof(A)/sizeof(A[0]));
    
    create_dub_ll(A,size);
    Insert_at_index(head,7,6);

    display(head);

    return 0;
        


}