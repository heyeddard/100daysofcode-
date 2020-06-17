#include<iostream>
using namespace std;
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void sort(int arr[],int n)
{
    int val = arr[n-1];
    for(int i=n-1;i>=0;i--)
    {
        if(val<arr[i-1])
        {
            arr[i] = arr[i-1];
            print(arr,n);
        }
        else
        {
            arr[i] = val;
            print(arr,n);
            break;
        }
        
    }
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
    sort(arr,n);
}
