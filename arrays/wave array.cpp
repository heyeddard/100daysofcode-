#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--){
	    int N;
	    cin >> N;
	    int s[N];
	    for(int i=0;i<N;i++){
	        cin >> s[i];
	    }
	    if(N%2==0)
	    for(int i=0;i<N-1;i+=2){
	        int temp=s[i];
	        s[i]=s[i+1];
	        s[i+1]=temp;
	    }
	    else{
	    for(int i=0;i<N-2;i+=2){
	        int temp=s[i];
	        s[i]=s[i+1];
	        s[i+1]=temp;
	    }
	    }
	    for(int i=0;i<N;i++){
	        cout << s[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}
