#include <iostream>
#include<string>
using namespace std;

int main()
{
   int t;
   cin>>t;
   getchar();// to do not take the '/n' as a charcter . Clear the input buffer 
   while(t--)
   {
   string s;
   getline(cin,s);
   int i=0;
   int l = s.length();
   while(i<l)
   {
       if(s[i]==' ')
       {
           i++;
           if(s[i]>='a' && s[i]<='z' && s[i]!=' ')
           {
               s[i] = s[i]-32;
           }
           else
           {
               continue;
           }
       }
       i++;
   }
   if(s[0]>='a' && s[0]<='z')
   {
       s[0] = s[0]-32;
   }
   cout<<s<<endl;
   
   }
}
