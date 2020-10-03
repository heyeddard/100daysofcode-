#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char s[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        unordered_map<char,int> m;
        for(int i=0;i<n;i++)
        {
            m[s[i]]++;
        }
        int c=2;
        for(int i=0;i<n;i++)
        {
            if(m[s[i]]==1)
            {
                 c=1;
                cout<<s[i]<<endl;
                break;
            }
        }
        if(c!=1)
        {
            cout<<-1<<endl;
        }
    }
	return 0;
}
