#include <iostream>
using namespace std;
#include <iostream>
using namespace std;

int main() {int t; cin>>t;
while(t--){
string str1,str2;
cin>>str1>>str2;
if(str1.length()!=str2.length()) cout<<0<<"\n";
else
{
str1=str1+str1;
int k=str1.find(str2);
if(k>=0) cout<<1<<"\n";
else cout<<0<<"\n";
}
}
//code
return 0;
}
