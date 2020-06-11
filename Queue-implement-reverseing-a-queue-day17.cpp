/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<stack>
using namespace std;
#define MAX_SIZE 6
int arr[MAX_SIZE];
int front=-1;
int rear=-1;// initial queue is empty 
bool isempty()
{
    if(rear==-1 && front==-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void enqueue(int x)
{
    if(rear+1%MAX_SIZE==front)
    {
        cout<<"Queue is full"<<endl;
        return;
    }
    else if(isempty())
    {
        front=rear=1;
    }
    else
    {
        rear = (rear+1)%MAX_SIZE;
    }
    arr[rear] = x;
}
void dequeue()
{
    if(isempty())
    {
        cout<<"Queue is empty"<<endl;
        return;
    }
    else if (front==rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front+1)%MAX_SIZE;
    }
}
int front_ele()
{
    return arr[front];
}
void reverse_queue()
{
    
}
int main()
{
    /*enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    front_ele();// ie 2 
    enqueue(6);
    enqueue(7);
    enqueue(8);// queue is full
    dequeue();
    front_ele();
    enqueue(8);*/
    // for reversing a queue
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);
    enqueue(7);
    // front = 0 is 2 
    // rear = 5 is 7
    stack<int> s;
    while(!isempty())//isempty for queue
    {
        s.push(front_ele());
        dequeue();
    }
    while(!s.empty())
    {
        enqueue(s.top());
        s.pop();
    }
    int a = front_ele();
    cout<<a;
    
    
    
    
}

