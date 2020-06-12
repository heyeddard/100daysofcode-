/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <deque>
using namespace std;
void printKMax(int arr[], int n, int k)
{
    deque<int> Q(k);//intialise memory with k size memory.
    int i;
    for(i=0;i<k;i++)
    {
        while(!Q.empty() && arr[i]>arr[Q.back()]){
            Q.pop_back();
        }
        Q.push_back(i);
    }
    // iterating remaining aray
    for(;i<n;i++) // i = 3 
    {
        cout<<arr[Q.front()]<<" ";
        // remove those who are not part of window 
         while ((!Q.empty()) && Q.front() <= i - k) 
         {
            Q.pop_front(); 
         }
         
        //remove elements which are not useful and part of window 
        while ((!Q.empty()) && arr[i]>=arr[Q.back()]) 
         {
            Q.pop_front(); 
         }
        
        //add new elements 
        Q.push_back(i);
        
       
        
    }
    //for last window 
    cout<<arr[Q.front()];
    
}
int main()
{
   int arr[] = { 12, 1, 78, 90, 57, 89, 56 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int k = 3; 
    printKMax(arr, n, k); 
    return 0; 
}
