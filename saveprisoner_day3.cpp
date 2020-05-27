#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,s;
        cin>>n>>m>>s;
        int rem = (s+m-1)%n;
        if (rem==0)
        {
            cout<<n<<endl;
        }
        else {
        {
            cout<<rem<<endl;
        }
        }
    }
}
