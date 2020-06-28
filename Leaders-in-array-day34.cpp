/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
void leader(int arr[], int n)
{
    int temp[n];
    int l = arr[n-1];
    temp[0] = l;
    int res = 1;
    //cout<<l<<" ";
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>l)
        {
            l=arr[i];
            //cout<<l<<" ";
            temp[res] = l;
            res++;
            
        }
    }
    int start = 0;
    int end = res-1;
    while (start < end) 
    { 
        int t = temp[start];  
        temp[start] = temp[end]; 
        temp[end] = t; 
        start++; 
        end--; 
    }  
    for(int i=0;i<res;i++)
    {
        cout<<temp[i]<<" ";
    }
}
int main()
{
    
    int arr[] = {16,17,4,3,5,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    leader(arr,n);
}
