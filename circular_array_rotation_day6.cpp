
#include<bits/stdc++.h>

using namespace std;


int main() {
   long long int k,n,q;
    cin>>n>>k>>q;
    k=k%n;
   long long int i,ar[n],x,s=0;
   long long newar[n];
    for(i=0;i<n;i++)
        cin>>ar[i];
    for(i=0;i<n;i++)
    {
        newar[(i+k)%n] = ar[i];
    }
    while(q)
    {
        int x;
        cin>>x;
        cout<<newar[x]<<endl;
        q--;
    }
}
