#include<bits/stdc++.h>
using namespace std;
int fib(int a){
    if(a==0||a==1){
        return a;
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