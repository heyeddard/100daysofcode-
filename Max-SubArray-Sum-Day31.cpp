/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <climits>

using namespace std;
int max_sum(int arr[], int n)
{
    int ans = INT_MIN;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i+j>n)
            {
                break;
            }
            int sum = 0;
            for(int k=j;k<(i+j);k++)
            {
                 sum += arr[k];
                ans = std::max(ans,sum);
            }
        }
    }
    return ans;
}
int main()
{
   int arr[] = {3,-2,5,-1};
   int n = sizeof(arr)/sizeof(arr[0]);
   int m = max_sum(arr,n);
   cout<<m;
}
