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
void remove_duplicates()
{
    node* curr = head;
    node* q;
    while(curr!=NULL && curr->link!=NULL)
    {
        if(curr->data==curr->link->data)
        {
            q = curr->link->link;
            free(curr->link);
            if(q==NULL)
            {
                curr->link = NULL;
                break;
            }
            curr->link = q;
            
        }
        if(curr->data!=curr->link->data)
        {
            curr = curr->link;
        }
        
    }
}
void sort()
{
   node* i = head;
   node* j = head->link;
   for(i=head;i!=NULL;i=i->link)
   {
       for(j=i->link;j!=NULL;j=j->link)
       {
           if(i->data>j->data)
           {
               int t = i->data;
               i->data = j->data;
               j->data = t;
           }
       }
   }
}
int main()
{
    head = NULL;
    insertatbeg(10);
    insertatbeg(20);
    insertatbeg(4);
    insertatbeg(100);
    insertatbeg(100);
    insertatbeg(20);
    insertatbeg(101);
    insertatbeg(2);
    print();
    
    sort();
    remove_duplicates();
    print();

    return 0;
}
