/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
struct node{
    int data;
    node* link;
};
node* head;
node* head1;
void insert(int x)
{
    node* temp = new node();
    temp->data = x;
    temp->link = head;
    head = temp;
}
void print(node* start)
{
    node* temp = start;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->link;
    }
    cout<<endl;
}
void reverse()
{
    node* curr = head1;
    node* next;
    node* prev = NULL;
    while(curr!=NULL)
    {
        next = curr->link;
        curr->link = prev;
        prev = curr;
        curr = next;
    }
    head1 = prev;
}
int length_iterative()
{
    int count = 0;
    node* temp = head;
    while(temp!=NULL)
    {
        count++;
        temp = temp->link;
    }
    return count;
}
int main()
{
    head  = NULL;
    head1 =NULL;
    insert(1);
    insert(2);
    insert(2);
    insert(1);
    
    print(head);
    head1 = head;
    reverse();
    
    print(head1);
    int l = length_iterative();
    while(l)
    {
       if(head->data!=head1->data)
       {
           cout<<"NOT A PALINDROME"<<endl;
           break;
       }
       head = head->link;
       head1 = head1->link;
       l--;
    }
    if(l==0)
    {
        cout<<"LIST IS A PALINDROME"<<endl;
    }
    
}
