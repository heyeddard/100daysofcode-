// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}
// } Driver Code Ends


/* The function should return position where the target string 
   matches the string str
Your are required to complete this method */
int strstr(string s, string x)
{
     int c=1;
     for(int i=0;i<s.size();i++)
     {
         int k = i;
         int j;
         for( j=0;j<x.size();j++)
         {
             if(x[j]!=s[k])
             {
                 break;
             }
             k++;
         }
         if(j==x.size())
         {
             c=0;
             return i;
         }
     }
     if(c)
     {
         return -1;
     }
     
}
