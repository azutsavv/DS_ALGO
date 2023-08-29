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

//  delete at a given index

void delete_LL(int ind){
    Node* p;
    p=head;
    if(ind==0){

        head=head->next;
        delete p;
        if(head)
            head->prev=NULL;
    }

    else{
        for(int i=0 ;i<ind-1;i++){
            p=p->next;
        }
        p->prev->next=p->next;
        if(p->next)
            p->next->prev=p->prev;
        
        delete p;
    }
}


Node display(Node *p){
    while (p!=NULL)
    {
        cout<<p->prev<<"-"<<p->data<<"-"<<p->next<<"->  ";
        p=p->next;
    }
    cout<<endl;
}

int main(){

    int A[]={1,2,3,4,5,6};
    int size=(sizeof(A)/sizeof(A[0]));
    
    create_dub_ll(A,size);
    display(head);
    delete_LL(2);
    display(head);
    delete_LL(0);
    display(head);

    return 0;
        


}