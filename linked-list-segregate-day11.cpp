/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// segregate even and odd 
#include <iostream>
using namespace std;
struct node{
    int data;
    node* link;
};
node* head;
void insert(int x)
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
void segregate()
{
    node* curr = head;
    node* oddhead=NULL;
    node* lastoddhead=NULL;
    node* evenhead = NULL;
    node* lastevenhead = NULL;
    while(curr!=NULL)
    {
        if((curr->data)%2!=0)// odd data 
        {
          if(oddhead==NULL)
          {
              oddhead = lastoddhead = curr;
          }
          else
          {
              lastoddhead->link=curr;
              lastoddhead = curr;
          }
        }
        else
        {
            if(evenhead==NULL)
            {
                evenhead = lastevenhead = curr;
            }
            else 
            {
                lastevenhead->link = curr;
                lastevenhead = curr;
            }
        }
        curr = curr->link;
    }
    if(evenhead!=NULL)
    {
        head = evenhead;
    
   
        lastevenhead->link = oddhead;
    }
    else
    {
        head = oddhead;
    }
    if(lastoddhead!=NULL)
    {
        lastoddhead->link = NULL;
    }
}
int main()
{
    head = NULL;
    insert(8);
    insert(6);
    insert(3);
    insert(4);
    insert(2);
    insert(1);
    print();
    segregate();
    print();
    
    
    return 0;
}
