//Sort an array of integers using Insertion sort.
#include <iostream>
using namespace std;


void insertion(int arr[] , int size){
    int i, key, j;  
    for (i = 1; i < size ; i++) 
    {  
        key = arr[i];  
        j = i - 1;  
  
        
        while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = key;  
    }  
   
   cout<<"The shorted array is: ";
   for(int i=0;i<size;i++)
   {
       cout<<arr[i]<<" ";
   }
}


int main()
{
   cout<<"Please enter the size of the array"<<"\n";
   int size;
   cin>>size;
   int array[size];
   cout<<"Enter array elements"<<"\n";
   for(int i=0;i<size;i++)
   {
       cin>>array[i];
   }
   insertion(array , size);

    return 0;
}
