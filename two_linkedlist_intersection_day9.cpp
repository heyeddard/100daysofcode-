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
node* head1;
node* head2;
node* list1;
node* list2;
node* headcommon;
void commoninsert(int x)
{
    node* temp = new node();
    temp->data = x;
    temp->link = headcommon;
    headcommon = temp;
    
}
void insert(node** start , int x)
{
    
    node* temp = new node();
    temp->data = x;
    temp->link = *start;
    *start = temp;
    
}
void print(node* b)
{
    node* temp = b;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->link;
        
    }
    cout<<endl;
}
int length(node* a)
{
    int count = 0;
    node* temp = a;
    while(temp!=NULL)
    {  
        count++;
        temp = temp->link;
        
    }
    return count;
}
int main()
{
    head1 = NULL;
    head2 = NULL;
    headcommon = NULL;
    insert(&head1,6);
    insert(&head1,4);
    insert(&head1,3);
    insert(&head1,2);
    insert(&head1,1);
    print(head1);
    insert(&head2,8);
    insert(&head2,6);
    insert(&head2,4);
    insert(&head2,2);
    print(head2);
    node* i;
    node* j;
    for(i=head1;i!=NULL;i=i->link)
    {
        for(j=head2;j!=NULL;j=j->link)
        {
            if(i->data==j->data)
            {
                commoninsert(i->data);
            }
        }
    }
    cout<<"The intersection list is: ";
    print(headcommon);
    
    
    
    
    return 0;
}
