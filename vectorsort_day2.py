#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
     vector<int> v;
     int n;
     cin>>n;
     for(int i=0;i<n;i++)
     {
        int no;
        cin>>no;
         v.push_back(no);
     }
     sort(v.begin(),v.end());
     for(int i=0;i<n;i++)
     {
         cout<<v[i]<<" ";
     }
    
}
