#include<iostream>
using namespace std;
struct node{
    int data;
    node* link;
};
node* top;
void push(int x)
{
    node* temp = new node();
    temp->data = x;
    temp->link = top;
    top = temp;
}
void pop()
{
    if(top==NULL)
    {
        cout<<"UNDERFLOW"<<endl;
    }
    node* temp = top;
    top = top->link;
    free(temp);  
   
    
}
void print()
{
    node* temp = top;
    cout<<"The stack is ";
    while(temp!=NULL)
    {
        
        cout<<temp->data<<" ";
        temp = temp->link;
    }
    cout<<endl;
}
void top_element()
{
    cout<<"The top element is"<<top->data;
}
int main()
{
    top  = NULL;
    push(2);
    push(3);
    push(4);
    print();
    pop();
    print();
    top_element();
}
