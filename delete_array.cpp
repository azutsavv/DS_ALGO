#include<bits/stdc++.h>
using namespace std;

class Array{
    public:
        int A[20];
        int size;
        int length;
};

    void display(  Array array){
        int i;
        cout<<"Elements Are"<<endl;
        for(int i=0; i<array.length;i++){
            cout<<array.A[i]<<"\n";
        }
    }
   
    void delete1( Array *array, int  index){
        int x=0;
        if(index>0 && index<array->length){

            x=array->A[index];
            for(int i=index; i<array->length-1;i++){
                array->A[i] = array->A[i+1];
                
            }
            array->length--;
                
       
        }
         

    }
   
int main()
{
    class Array arr1={{2,3,4,5,6},20,5};
   display(arr1); 
   delete1( & arr1 , 4);
   display(arr1); 
   
    return 0; 
    
}