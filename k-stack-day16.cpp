// K STACK IN array
#include<bits/stdc++.h>
using namespace std;
class KStacks
{
    int *arr;
    int *top;
    int *next;
    int n,k;
    int free;
    
    public:
    KStacks(int k, int n);
    bool isFull()
    {
        return (free==-1);
    }
    void push(int item, int sn);
    int pop(int sn);
    bool isEmpty(int sn)// no use here 
    {
        return (top[sn]==-1);
    }
};
KStacks::KStacks(int k1,int n1)// func defined using scope resolutopn 
{
    k = k1;
    n = n1;
    arr = new int[n];
    top = new int[k];
    next = new int[n];
    // step 1 :- make top array equals to -1
    for(int i=0;i<k;i++)
    {
        top[i] = -1;
    }
    free = 0; //step 2 :- initial free will be 0 
    // step 3 fill the next array 
    for(int i=0;i<n-1;i++)
    {
        next[i] = i+1;
    }
    next[n-1] = -1 ;// end of array
}
void KStacks::push(int a , int sn)
{
    if(isFull())
    {
        cout<<"Stack overflow"<<endl;
        return;
    }
    int i = free; // i = 0;
    // next free slot 
    free = next[i];// ie 1 
    // update top and next 
    next[i] = top[sn]; // ie -1 for the first time 
    top[sn] = i;
    arr[i] = a;
}
int KStacks::pop(int sn)
{
    if(isEmpty(sn))
    {
        cout<<"UNderflow"<<endl;
        return INT_MAX;
    }
    int i = top[sn]; // index found of top element 
    // then we have make another top 
    top[sn] = next[i];
    
    // update the free 
    next[i] = free;
    free = i;
    return arr[i];
    
}
int main()
{
    int k=3;
    int n=10;
    KStacks ks(k,n);
    ks.push(15,2);
    ks.push(45,2);
    
    ks.push(17, 1); 
    ks.push(49, 1); 
    ks.push(39, 1); 
    
    ks.push(11, 0); 
    ks.push(9, 0); 
    ks.push(7, 0); 
    
    cout<<"Popped Element Stack 2:"<<ks.pop(2)<<endl;
    cout<<"Popped Element Stack 1:"<<ks.pop(1)<<endl;
  cout<<"Popped Element Stack 0:"<<ks.pop(0)<<endl;
  return 0;
  
}
