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
            cout<<array.A[i]<<"\n";
        }
    }

    void append(class Array *arr, int x){

        if (arr->length<arr->size){
            arr->A[arr->length++]=x;
        }
    }

    void insert(class Array *arr , int index, int x){

        if (index >=0 && index<=arr->length)
        {
            for(int i= arr->length; i>index;i-- ){
                arr->A[i]=arr->A[i-1];
            }
            arr->A[index]=x;
            arr->length++;
        }
        
    }

int main()
{
    class Array arr1={{2,3,4,5,6},20,5};
    
   insert(&arr1, 4,21);
   display(arr1);
   
    return 0; 
    
}