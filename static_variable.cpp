#include<bits/stdc++.h>
using namespace std;
 
int fun(int n)
{
    static int x=0;
    if (n>0)
    {
        x++;
        
        return fun(n-1)+x;
    }
    else
    return 0;
    
}
int main()
{
    int n=4;
    cout<<fun(5);
    
    return 0;
}

//output will be 25 as when the value of n reaches 0 , total 5 times fun() have been executed so the value of x have been updated to 5;
