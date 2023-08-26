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

Node* Search(Node* P, int x){
    while (P!=nullptr)
    {
        if(P->data==x)
        {
            return P;
        }
        P=P->next;
    }
    return NULL;
    
}

int main(){

    int A[]={2,3,4,5,76,7,8};
    int size=(sizeof(A)/sizeof(A[0]));
    
    Create(A,size);
    cout<<Search(head,76);

    return 0;
    


}