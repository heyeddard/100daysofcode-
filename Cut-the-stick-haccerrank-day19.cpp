#include<iostream>
using namespace std;
int min(int arr[], int n)
{
    int a = arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<=a)
        {
            a = arr[i];
        }
    }
    return a ;
}

void nostick(int arr[], int n)
{
    int c = 0;
    int small = min(arr,n);
    while(small!=1001)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=1001)
            {
                if(arr[i]>=small)
                {
                    arr[i] = arr[i]-small;
                    if(arr[i]==0)
                    {
                        arr[i] = 1001;
                    }
                    c++;
                }
            }
        }
        cout<<c<<endl;
        c = 0;
        small = min(arr,n);
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
    nostick(arr,n);
}
