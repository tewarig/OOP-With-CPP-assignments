//To find 2nd max and 2nd min number from an integer array.
#include <iostream>
using namespace std;
#define INT_MAX -2147483647 
#define INT_MIN 2147483647

void secondnumber(int arr[] , int size){
    int max = INT_MAX;
    int min = INT_MIN;
    int smin = INT_MIN;
    int smax = INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
        for(int i=0;i<size;i++)
    {
        if(arr[i]<smin && arr[i]>min)
        {
           smin = arr[i];
        }
    }

    
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {   
            max = arr[i];
        }
        
    }
    cout<<max;
     for(int i=0;i<size;i++)
    {
        if(arr[i]>smax && arr[i]<max)
        {   
            smax = arr[i];
        }
        
    }
     
   
   cout<<"2nd max element: " <<smax<<"\n";
   cout<<"2nd min element: " <<smin<<"\n";
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
    secondnumber(array , size);

    return 0;
}
