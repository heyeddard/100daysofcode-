//median of array 


#include <iostream>

using namespace std;
void median(int arr[], int n)
{
    int i = n-1;
    int m = (i/2);
    cout<<arr[m];
}
void insertionsort(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        int val = arr[i];
        int hole = i;
        while(hole>0 && arr[hole-1]>val)
        {
            arr[hole] = arr[hole-1];
            hole--;
        }
        arr[hole]=val;
    }
}
void print(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
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
   
   insertionsort(arr,n);
   //print(arr,n);
   median(arr,n);

}
