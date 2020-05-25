#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;//taking size of an array 
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //reversing logic 
    int start = 0;
    int end = n-1;
    while(start<end)
    {
       int temp = arr[start];
       arr[start] = arr[end];
       arr[end] = temp;
       start++;
       end--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }