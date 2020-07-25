//Find out whether a given string is palindrome or not.
#include <iostream>
#include <string.h>
using namespace std;





int main()
{
   char letter[1000];
   cin>>letter;
   int n = strlen(letter);
   int count = 0;
   for(int i=0;i<n/2;i++)
   {
       if(letter[i]==letter[n-i-1])
       {
           count++;
       }
       
   }
   if(count == n/2)
   {
       cout<<"String is palindrome";
   }else{
       cout<<"String is not a palindrome";
   }
    return 0;
}
