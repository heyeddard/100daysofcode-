#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        int a = i;
	        int res = 1;
	        for(int j=0;j<n;j++)
	        {
	            
	            if(j!=a)
	            {
	                res = res * arr[j];
	            }
	        }
	        cout<<res<<" ";
	        
	    }
	    cout<<endl;
	}
	return 0;
}
