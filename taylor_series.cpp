#include<bits/stdc++.h>
using namespace std;
int e(int x,int n){
    static int p=1,f=1;
    int r;
    if(n==0){
        return 1;
    }
    else{
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+(p/f);
    }
}
int main(){
    int a,b;
    cout<<"enter the value of x :";
    cin>>a;
    cout<<"enter the no. of term :";
    cin>>b;
    cout<<e(a,b);
    return 0;
}