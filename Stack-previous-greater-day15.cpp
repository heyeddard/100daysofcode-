//previous greater element 
#include<iostream>
#include<stack>
using namespace std;
void printPGE(int arr[], int n)
{
    stack<int> s;
    s.push(arr[0]);
    cout<<s.top()<<"->"<<-1<<endl;
    for(int i=1;i<n;i++)
    {
        while(s.empty()==false && s.top()<arr[i])
        {
            s.pop();
        }
        if(s.empty())
        {
            cout<<arr[i]<<"->"<<-1<<endl;
        }
        else
        {
            cout<<arr[i]<<"->"<<s.top()<<endl;
        }
        s.push(arr[i]);
    }
}
int main()
{
    int arr[] = {10,4,2,20,40,12,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    printPGE(arr,n);
}
