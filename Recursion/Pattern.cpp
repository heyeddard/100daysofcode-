//SEQUENCE GENETATION 
#include<iostream>
using namespace std;
void rec(int i)
{
    cout<<i<<" ";
    if(i<=0)
    {
        return;
    }
    rec(i-5);
    cout<<i<<" ";
}
int main()
{
    int n;
    cin>>n;
    rec(n);
    cout<<endl;
}
