#include<bits/stdc++.h>
using namespace std;
void fun(int n){
    if(n>0)
    {
        cout<<n;
        fun(n-1);
    }
}

int main()
{
    int x=4;
    fun(x);
}


// this is head recursion
// #include<bits/stdc++.h>
// using namespace std;
// void fun(int n){
//     if(n>0)
//     {
//         fun(n-1); 
//         cout<<n;
//         
//     }
// }

// int main()
// {
//     int x=4;
//     fun(x);
// }
