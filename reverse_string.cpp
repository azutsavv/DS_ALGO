#include<bits/stdc++.h>
using namespace std;
int main()
{    int j,k;
     char q;
    char A[10];
    for (int i = 0; i < 10; i++)
    {
        cin>>A[i];
    }
    for ( j = 0; j !='\0'; j++);
    j=j-1;
    for (int i = 0; i<j ; i++,j--)
    {
        q=A[i];
        A[i]=A[j];
        A[j]=q;
    }
    cout<<A;
    
    

    
    
    
}