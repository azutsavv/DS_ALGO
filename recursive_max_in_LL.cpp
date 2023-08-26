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

int max(Node* P){
    int x=0;
    if (P==0)
    {
        return INT_MIN;
    }
    else
    {
        x=max(P->next);
        if(x>P->data)
        {
            return x;
        }
        else
        {
            return P->data;
        }
    }
    return x;
}

int main(){

    int A[]={2,3,4,5,6,7,8};
    int size=(sizeof(A)/sizeof(A[0]));
    
    Create(A,size);
    cout<<max(head);

    return 0;
    


}