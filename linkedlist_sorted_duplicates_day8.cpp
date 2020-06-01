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
int main()
{
    head = NULL;
    insertatbeg(4);
    insertatbeg(4);
    insertatbeg(3);
    insertatbeg(3);
    insertatbeg(2);
    insertatbeg(1);
    print();
    remove_duplicates();
    print();

    return 0;
}
