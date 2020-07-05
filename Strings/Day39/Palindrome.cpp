//Palindrome String 
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t)
    {
    int n;
    cin>>n;
    char a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int c=0;
    
     int i=0;
        for(int j=n-1;j>=0;j--)
        {
            if(a[i]!=a[j])
            {
                c=1;
                break;
            }
            i++;
        }
    
    if(c==1)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
    t--;
    }
    
}
