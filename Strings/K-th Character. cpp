
	   // { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function template for C++
class Solution{
public:		
	
	char kthCharacter(int m, int n, int k)
	{
	    string bin;
	    if(m==0)
	    {
	        bin += '0';
	    }
	    
	    if(m!=0)
	    {
	    while(m)
	    {
	        bin += to_string(m%2);
	        m = m/2;
	    }
	    }
	    reverse(bin.begin(),bin.end());
	    string res;
	    res = bin;
	    while(n)
	    {
	        string temp = "";
	        
	        for(int i=0;i<bin.length();i++)
	        {
	            if(bin[i]=='0')
	            {
	                temp += "01";
	            }
	            else
	            {
	                temp += "10";
	            }
	           
	         }
	          res = temp;
	          bin = temp;
	          n--;
	    }
	    char c = res[k-1];
	    return c;
	    }
	    
	    
	
};

// { Driver Code Starts.

int main() 
{
   

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int m, n, k;
   		cin >> m >> n >> k;

   	
        Solution ob;
   		cout << ob.kthCharacter(m, n, k) << "\n";
   	}

    return 0;
}  // } Driver Code Ends
