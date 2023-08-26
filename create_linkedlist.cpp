#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

};
int main(){

    int A[]={2,3,4,5,6,7,8};
    
    Node* head= new Node;
    Node* temp;
    Node* last;

    head->data= A[0];
    head->next= nullptr;

    last=head;

    // creating linked list

    for(int i=1;i<(sizeof(A)/sizeof(A[0]));i++ ){
        temp = new Node;

        temp->data=A[i];
        temp->next=nullptr;

        last->next=temp;
        last=temp;

    }

    // display of the linked list

    Node* P=head;
    while (P!=nullptr)
    {
        cout<<P->data<<"->"<<flush;
        P=P->next;
        
    }

    return 0;
    


}