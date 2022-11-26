#include<bits/stdc++.h>
using namespace std;
void funa(int n);
void funb(int n){
    if ((n>0))
    {
       cout<<n<<endl;
       funa (n/2);
    }
    
}
void funa(int n){
    if(n>1){
        cout<<n<<endl;
        funb (n-1);
    }

}

int main(){
     funa(19);
     return 0;
}