/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void shift(int arr[], int n)
{
    int c=0;
    for(int i=1;i<n;i++)
    {
        int val = arr[i];
        int hole = i;
        while(hole>0 && arr[hole-1]>val)
        {
            arr[hole] = arr[hole-1];
            hole--;
            c++;
        }
        arr[hole] = val;
    }
    cout<<c;
}
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   shift(arr,n);
}
