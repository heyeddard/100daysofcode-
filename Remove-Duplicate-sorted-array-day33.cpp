/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
void print(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void remove_duplicate(int arr[], int n)
{
    int temp[n];
    temp[0] = arr[0];
    int res = 1;
    for(int i=1;i<n;i++)
    {
        if(temp[res-1] != arr[i])
        {
           temp[res] = arr[i];
           res++;
        }
    }
    for(int i=0;i<res;i++)
    {
        arr[i] = temp[i];
    }
    print(arr,res);
}
int main()
{
    int arr[] = {1,1,2,4,4,6,8,8,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    remove_duplicate(arr,n);
   
}
