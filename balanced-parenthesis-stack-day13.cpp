#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool arepair(char open,char close)
{
    if(open=='(' && close==')')
    {
        return true;
    }
    if(open=='{' && close=='}')
    {
        return true;
    }
    if(open=='[' && close==']')
    {
        return true;
    }
    return false;
}
bool isbalanced(string s)
{
    stack<char> S;//using STL
    int l = s.length();
    for(int i=0;i<l;i++)
    {
        if(s[i]=='('|| s[i]=='{'||s[i]=='[')
        {
            S.push(s[i]);
        }
        else if (s[i]==')'||s[i]=='}'||s[i]==']')
        {
            if(S.empty() || !arepair(S.top(),s[i]))
            {
                return false;
            }
            else
            {
                S.pop();
            }
        }
        
    }
    return S.empty()?true:false;
}
int main()
{
    string s;
    cin>>s;
    if(isbalanced(s))
    {
        cout<<"BALANCED"<<endl;
    }
    else
    {
        cout<<"NOT BALANCED";
    }
}
