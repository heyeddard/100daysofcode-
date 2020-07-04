#include <iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int majority_elem(int a[], int n)
{
 
       sort(a,a+n);
       
       int x=a[0];
       int count=0;
       for(int j=0;j<n;j++)
       {
           if(x==a[j]){count++;if(count>n/2){return x;}}
           else{x=a[j];count=1;}
          
       }
       if(count<=n/2){
           return -1;
       }   
}
int main()
{
   int t;
   cin>>t;
   while(t)
   {
       int n;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }
       int ans = majority_elem(a,n);
       cout<<ans<<endl;
       t--;
       
   }
   
   
   return 0;
}
