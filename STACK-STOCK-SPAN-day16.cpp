#include<iostream>
#include<stack>
using namespace std;
void calc_ss(int price[], int n, int S[])
{
    stack<int> s;
    s.push(0);
    S[0] = 1;
    for(int i=1;i<n;i++)
    {
        while(!s.empty() && price[s.top()]<=price[i])
        {
            s.pop();
        }
        S[i] = s.empty()?(i+1):(i-s.top());
        s.push(i);
    }
}
void printArray(int arr[], int n) 
{ 
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
} 
int main()
{
    int price[] = {10,4,5,90,120,80};
    int n = sizeof(price)/sizeof(price[0]);
    int S[n];
    calc_ss(price,n,S);
    printArray(S, n); 
    
}
