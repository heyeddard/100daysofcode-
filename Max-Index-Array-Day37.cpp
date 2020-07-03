/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h> 
using namespace std;

int max_index(int arr[], int n)
{
    int res = INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>i;j--)
        {
            if(arr[j]>arr[i] && res < (j-i))
            {
                res = (j-i);
            }
        }
    }
    return res;
    
}

int main() 
{ 
    int arr[] = {9, 2, 3, 4, 5, 6, 7, 8, 18, 0}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int maxDiff = max_index(arr, n); 
    cout<< "\n" << maxDiff; 
    return 0; 
} 


