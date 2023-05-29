#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *p = new int[5];
    p[1]=1;
    p[2]=2;
    p[3]=3;
    p[4]=4;
    p[5]=5;

    int *q = new int[10];
    


    for (int i=1;i<=5;i++){
        cout<<p[i]<<endl;
    }
    
    // for (int i=1;i<=10;i++){
    //     cout<<q[i]<<endl;
    // }

    for (int i=1;i<=5;i++){
        q[i]=p[i];
    }

    // for (int i=1;i<=10;i++){
    //     cout<<q[i]<<endl;
    // }

    // delete []p;

    // for (int i=1;i<=10;i++){
    //     cout<<p[i]<<endl;
    // }

    p=q;
    delete []q;

    for (int i=1;i<=10;i++){
        cout<<p[i]<<endl;
    }
    return 0;


}