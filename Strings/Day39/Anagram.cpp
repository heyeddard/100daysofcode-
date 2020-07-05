//anagrams
#include <iostream>
#include<string>
using namespace std;
int main()
{
    
    string s1;
    string s2;
    cin>>s1>>s2;
    int l1 = s1.length();
    int l2 = s2.length();
    int c=0;
    if(l1==l2)
    {
        for(int i=0;i<l1;i++)
        {
            for(int j=0;j<l2;j++)
            {
                if(s1[i]==s2[j])
                {
                    c++;
                }
            }
        }
    }
    if(c>=l1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
}


