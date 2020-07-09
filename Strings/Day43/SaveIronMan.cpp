#include <iostream>
#include <string>
using namespace std;
void isPalindrome(string s2)
{
    int j=0;
    int l = s2.length();
    int k=0;
    for(int i=l-1;i>=0;i--)
    {
        if(s2[j]!=s2[i])
        {
            k=1;
            break;
        }
        j++;
    }
    if(k==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
int isvalid(char ch)
{
    if(tolower(ch)>='a' && tolower(ch)<='z')
    {
        return 1;
    }
    if(ch>='0' && ch<='9')
    {
        return 1;
    }
    return 0;
}
int main()
{
   int t;
   cin>>t;
   getchar();
   while(t--)
   {
   string s;
   getline(cin,s);
   string s1;
   int l = s.length();
   for(int i=0;i<l;i++)
   {
       if(isvalid(s[i]))
       {
           s1 += tolower(s[i]);
       }
   }
   
   isPalindrome(s1);
   
   }
}
