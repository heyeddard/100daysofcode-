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
	     map<string,int> k;
	     for(int i=0;i<n;i++)
	     {
	         string s;
	         cin>>s;
	         k[s]++;
	     }
	     int max=-1;
	     string l = " ";
	     for(auto it=k.begin();it!=k.end();it++)
	     {
	         if(max<it->second)
	         {
	             max = it->second;
	             l = it->first;
	         }
	     }
	     cout<<l<<" "<<max;
	     cout<<endl;
	 }
	return 0;
}
