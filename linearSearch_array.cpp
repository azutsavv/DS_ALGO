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


    void Swap(int *x, int *y){
        int temp;
        temp=*x;
        *x=*y;
        *y=temp;
    }

    int Lsearch(Array *array , int key){
        for (int i = 0; i < array->length; i++)
        {
            if(key== array->A[i]){
                
                cout<<i<<endl;
                Swap(&array->A[i],&array->A[i-1]);
                cout<<i<<endl;
                return 0;
            }
           
        }
        return -1;
    }

  

int main()
{
    class Array arr1={{2,3,4,5,6},20,5};
    Lsearch(&arr1,3);
    display(arr1);
    return 0; 
    
}