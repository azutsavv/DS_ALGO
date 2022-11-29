#include<bits/stdC++.h>
using namespace std;
void toh(int d, int a=1, int b=2 ,int c=3){
    if(d>0){
        toh(d-1,a,c,b);
        cout<<"("<<a<<"."<<c<<")"<<endl;
        toh(d-1,b,a,c);
    }

}
int main(){
    int n;
    cout<<"no. of rings :";
    cin>>n;
    toh(n,1,2,3);
    return 0;
}