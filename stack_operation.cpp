#include<bits/stdc++.h>
using namespace std;

class StackOperation
{
private:
    /* data */
public:
    int size;
    int top;
    int *S;
};

void display(class StackOperation st){
    for (int i = st.top; i >=0; i--)
    {
        cout<<st.S[i]<<endl;

    }
    
}

void push(class StackOperation *st, int x){

    if (st->top==st->size-1)
    {
        cout<<"stack OverFlown";
    }
    else
    {
        st->top++;
        st->S[st->top]=x;
    }
    
}

int pop(class StackOperation *st)
{
    
    int x= -1;

    if (st->top ==-1)
    {
        cout<<"stack UnderFlown";
    }
    else
    {
        x=st->S[st->top];
        st->top--;
        
    }
    return x;
}


int peek(class StackOperation st, int index)
{
    int x=-1;

    if (st.top-index+1<0){
        cout<<"invalid positon";

    }
    else
    {
        x=st.S[st.top-index+1];
    }
    return x;
    
}





int main(){
    
    class StackOperation st;
    int size;
    cout<<"enter size of stack";
    cin>>size;

    st.size=size;
    st.top=-1;

    st.S = new int[size];

    push(&st, 10);
    push(&st, 20);
    push(&st, 30);
    push(&st, 40);
    display(st);
    pop(&st);
    pop(&st);
    
    display(st);

    peek(st,12);
    return 0;
}
// all the possible condition has been checked and working fine. underflown overflown and invalid postion conditon also been checked