/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
    int count[100];
    for(int i=0;i<100;i++)// making count array zero
    {
        count[i] = 0;
    }
    for(int i=0;i<n;i++)//collecting the count of each element 
    {
        count[arr[i]]++;
    }
    
    for(int i=0;i<100;i++)
    {
        if(count[i]!=0)
        {
            for(int j=0;j<count[i];j++)
            {
                cout<<i<<" ";
            }
        }
    }
    
    
    
    
}
