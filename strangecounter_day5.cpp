#include<iostream>
using namespace std;
int main()
{
    int q ;
    cin>>q;
    int cycle = 3;
    while(q>cycle)
    {
        q = q-cycle;
        cycle = cycle*2;
    }
    cout<<(cycle-q+1);
}
