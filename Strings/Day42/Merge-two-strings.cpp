#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  getchar();
  while(t--)
  {
  string s1;
  string s2;
  cin>>s1;
  cin>>s2;
  int l1 = s1.length();
  int l2 = s2.length();
  int i=0;
  int j=0;
  while(i<l1||j<l2)
  {
      if(i==l1&&j<l2)
      {
          cout<<s2[j];
          j++;
      }
      else if(j==l2 && i<l1)
      {
          cout<<s1[i];
          i++;
      }
      else
      {
          cout<<s1[i];
          cout<<s2[i];
          i++;
          j++;
      }
  }
  cout<<endl;
  }
  
}
