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

// delete from the starting of LL

void delete_first(Node* P){
    Node* d=new Node;
    d=P;
    P=P->next;
    delete d;

}

void delete_from_index(Node* P, int index){
Node* q= P;
if(index==1){
    P=P->next;
    delete q;
}
else{
    Node* w=NULL;
    for(int i=1;i<index-1&&P;i++){
    q=q->next;
    }
    if(P){
        w=q->next;
        q->next=w->next;
        delete w;
    }
    else
    cout<<"invalid index";
    
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

    int A[]={1,2,3,4,5,6,7,8};
    int size=(sizeof(A)/sizeof(A[0]));
    
    Create(A,size);
    Display(head);
    cout<<endl;
    delete_from_index(head,8);
    Display(head);
    

    return 0;
}