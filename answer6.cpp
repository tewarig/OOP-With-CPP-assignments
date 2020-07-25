
//Check whether a number is Prime.
#include <iostream>
#include <string.h>
using namespace std;
void findPrime(int n)
{
    int count;
 for(int i=2;i<n;i++)
 {
     if(n%i==0)
     {
         count++;
     }
 }
 if(!count)
 {
     cout<<"It is prime";
 }else{
     cout<<"No, it is not a prime";
 }
}




int main()
{
   
  int n;
  cin>>n;
  findPrime(n);
  
    return 0;
}
