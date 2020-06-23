#include<iostream>
using namespace std;
void print(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void leftrotation(int arr[], int n)
{
    int a = arr[0];
    for(int i=0;i<n;i++)
    {
        arr[i] = arr[i+1];
    }
    arr[n-1] = a;
}
void drotate(int arr[], int d, int n)
{
    for(int i=0;i<d;i++)
    {
        leftrotation(arr,n);
    }
}
int main()
{
    int n,d;
    cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    drotate(arr,d,n);
    print(arr,n);

}
