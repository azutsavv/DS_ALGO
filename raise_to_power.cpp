#include<bits/stdc++.h>
using namespace std;
int fact(int a,int b){
    if(b==1){
        return a;
    }
    else{
        return (fact(a,b-1)*a);
        
    }

}
int main(){
    int n,m;
    cout<<"enter the number :";
    cin>>n;
    cout<<"enter thr power of number :";
    cin>>m;
    cout<<fact(n,m);
    return 0;
}