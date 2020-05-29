#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
   map<string,int> m;
   int n;
   cin>>n;
   while(n)
   {
       int q;
       cin>>q;
       string s;
       if(q==1)
       {
           int x=0;
           cin>>s;
           cin>>x;

           m[s]+=x;
       }
       if(q==2)
       {
           cin>>s;
           m.erase(s);
       }
       if(q==3)
       {
           cin>>s;
           map<string,int>::iterator itr = m.find(s);
           if(itr!=m.end())
           {
               cout<<m[s]<<endl;
           }
           else
           {
               cout<<0<<endl;
           }
       }
       n--;
   }
    return 0;
}



