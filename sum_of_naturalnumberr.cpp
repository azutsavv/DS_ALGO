#include<bits/stdc++.h>
using namespace std;
int  sum(int a){
    if(a==0){
    return 0;
        
    }
    else{
        return sum(a-1)+a;
    }
    
}
int main(){
    int n;
    cout<<"enter no of first natural number :";
    cin>>n;
   cout<< sum(n);
}