#include<bits/stdc++.h>
using namespace std;
int fact(int a){
    if(a==1){
        return 1;
    }
    else{
        return fact(a-1)*a;
    }
}
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    cout<<fact(n);
    return 0;
}