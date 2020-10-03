#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	   int c = 1;
	    string s;
	    cin>>s;
	    unordered_map<char,int> m;
	    for(int i=0;i<s.size();i++)
	    {
	        m[s[i]]++;
	        if(m[s[i]]==2)
	        {
	           
	            cout<<s[i]<<endl;
	            c=0;
	            break;
	        }
	    }
	    if(c)
	    {
	        cout<<-1<<endl;
	    }
	}
	return 0;
}
