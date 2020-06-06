#include<iostream>
using namespace std;

int arr[101];
int highest_index = 100;//100
int top = -1;
void push(int x)
{
    if(top==highest_index)
    {
        cout<<"OverFlow"<<endl;
        return;
    }
    top++;
    arr[top] = x;
}
void pop()
{
    if(top==-1)
    {
        cout<<"UNDER fLOW"<<endl;
        return;
    }
    top--;
}
void top_element()
{
    cout<<"top element is: "<<arr[top];
    cout<<endl;
}
void print()
{
    int i;
    cout<<"Stack right now: ";
    for(int i=0;i<=top;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    push(2);
    print();
    push(5);
    print();
    push(10);
    print();
    top_element();
    pop();
    print();
}
