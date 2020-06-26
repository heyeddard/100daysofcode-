/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

void kadanealgo(int arr[], int n)
{
    int max_curr,max_global;
    max_curr = max_global = arr[0];
    for(int i=1;i<n;i++)
    {
        max_curr = std::max(arr[i],max_curr+arr[i]);//current element and previous max sub array+ current element
        if(max_curr>max_global)
        {
            max_global = max_curr;
        }
    }
    cout<<max_global;
}
int main()
{
   int arr[] = {-2,3,2,-1};
   int n = sizeof(arr)/sizeof(arr[0]);
   kadanealgo(arr,n);
}
