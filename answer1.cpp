//To find greatest of three numbers.
#include <iostream>
using namespace std;
#define INT_MIN -2147483627 ;
int findMax(int num1,int num2,int num3){
  int min = INT_MIN;
  if(num1>min)
  {
     min = num1; 
  }
  if(num2>min)
  {
     min = num2;    
  }
  if(num3>min)
  {
      min = num3;
  }
  return min;
}


int main()
{
    int num1,num2,num3;
    cout<<"Please, enter three numbers"<<"\n";
    cin>>num1>>num2>>num3;
    int max = findMax(num1,num2,num3);
    cout<<"the max number is: ";
    cout<<max;
    

    return 0;
}
