#include<bits/stdc++.h>
using namespace std;
int fib(int a){
    if(a==0){
        return 0;
    }
    else if (a==1)
    {
        return 1;
    }
    else{
        return fib(a-2)+fib(a-1);
    }

    
}
int main(){
    int n;
    cout<<"enter the number of terms :";
    cin>>n;
    cout<<fib(n);
    return 0;
}