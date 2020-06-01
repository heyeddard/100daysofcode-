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
void insertatbeg(int x)
{
    node* temp = new node();
    temp->data = x;
    temp->link = head;
    head = temp;
}
void print()
{
    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->link;
    }
    cout<<endl;
}
void first_last_change()
{
    node* temp = head;
    int t = temp->data;
    node* temp1 = head;
    while(temp1->link!=NULL)
    {
        temp1 = temp1->link;
    }
    int last = temp1->data;
    
    temp->data = last;
    temp1->data = t;
}

int main()
{
    head = NULL;
    insertatbeg(4);
    insertatbeg(3);
    insertatbeg(2);
    insertatbeg(1);
    print();
    first_last_change();
    print();
    
    

    return 0;
}
