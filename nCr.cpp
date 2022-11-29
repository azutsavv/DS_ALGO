#include<bits/stdc++.h>
using namespace std;
// using fadctorial
int fact(int n){
    if(n==1)
    return 1;
    else
    return fact(n-1)*n;

}
int comb(int a, int b){
    int q,w,r;
    q=fact(a);
    w=fact(b);
    r=fact(a-b);
    return q/(w*r);
}
//int Sum(int n, int r);   
int main(){
int y,t;
cout<<"enter value of n :";
cin>>y;
cout<<"enter value of r :";
cin>>t;
cout<<comb(y,t);
return 0;
}

//nCr == n!/r!*(n-r)!


//another way to solve it is by direct evalutaing without factorial

// int Sum(int n ,int r){
//     if(n==r||r==0){
//         return 1;
//     }
//     else{
//         return Sum(n-1,r-1)+Sum(n-1,r);
//     }
// }
