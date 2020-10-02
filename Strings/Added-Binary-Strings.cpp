// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function template for C++
class Solution{
public:	
	string addBinary(string A, string B)
	{
	    string result;
	    int i = A.size()-1;
	    int j = B.size()-1;
	    int carry = 0;
	    while(i>=0 || j>=0)
	    {
	        int sum = carry;
	        if(i>=0)
	        {
	            sum += A[i]-'0';
	        }
	    
	        if(j>=0)
	        {
	            sum += B[j]-'0';
	        }
	     carry = (sum>1)?1:0;
	    result+= to_string(sum%2);
	    i--;
	    j--;
	    } 
	    if(carry)
	    {
	        result += to_string(carry);
	    }
	    reverse(result.begin(),result.end());
	    string res;
	     int index;
	    for(int i=0;i<result.size();i++)
	     {
	         if(result[i]=='1')
	         {
	             index = i;
	             break;
	         }
	     }
	     for(int i=index;i<result.size();i++)
	     {
	         res += result[i];
	     }
	    return res;
	   
	    
	}
};

// { Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string A, B; cin >> A >> B;
		Solution ob;
		cout << ob.addBinary (A, B);
		cout << "\n";
	}
}
