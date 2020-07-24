#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

void toh(int n, int a,int b, int c)
{
    
    if(n==1)
    {
        cout<<"move disk "<<n<<" from rod "<<a<<" to "<<c<<endl;
        return;
    }
    toh(n-1,1,3,2);
    cout<<"move disk "<<n<<" from rod "<<a<<" to "<<c<<endl;
    
toh(n-1,2,1,3);
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        toh(n,1,2,3);
        int mov = pow(2,n);
        int res = mov-1;
        cout<<res;
        cout<<endl;
    }
}
