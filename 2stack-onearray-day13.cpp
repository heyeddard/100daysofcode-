/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int arr[8];
int top1 = -1;
int top2 = 8;
void push1(int x)
{
    if (top1+1==top2)
    {
        cout<<"OVERFLOW FOR STACK 1";
        return;
    }
    top1++;
    arr[top1] = x;
}
void pop1()
{
    if(top1==-1)
    {
        cout<<"UNDERFLOW FOR STACK 1";
        return;
    }
    top1--;
}
void push2(int x)
{
    if(top2-1==top1)
    {
        cout<<"OVERFLOW FOR STACK 2"<<endl;
        return;
    }
    top2--;
    arr[top2] = x;
}
void pop2()
{
    if (top2==8)
    {
        cout<<"UNDERFLOW FOR STACK 2";
        return;
    }
    top2--;
}
void print1()
{
    cout<<"STACK 1:";
    for(int i=0;i<=top1;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void print2()
{
    cout<<"STACK 2:";
    for(int i=top2;i<=7;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void top1_ele()
{
    cout<<arr[top1];
    cout<<endl;
}
void top2_ele()
{
    cout<<arr[top2];
    cout<<endl;
}

int main()
{
    push1(1);
    push1(2);
    push1(3);
    print1();
    top1_ele();
    push2(8);
    push2(7);
    push2(6);
    push2(5);
    push2(4);
    push2(10);
    print2();
    top2_ele();
    
}
