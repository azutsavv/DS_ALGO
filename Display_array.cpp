#include<bits/stdc++.h>
using namespace std;

class Array{
    public:
        int A[20];
        int size;
        int length;
    };

    void display( class Array array){
        int i;
        cout<<"Elements Are"<<endl;
        for(int i=0; i<array.length;i++){
            cout<<array.A[i];
        }

    }


int main()
{
    class Array arr1={{2,3,4,5,6},20,5};
    display(arr1);
    return 0; 
    
}