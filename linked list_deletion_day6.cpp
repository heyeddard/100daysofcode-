/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
struct node
{
    int data;
    node* link;
};
node* head;
void Insertatend(int x)
{
    node* temp = new node();
    temp->data = x;
    temp->link = NULL;
    node* temp1 = head;
    if(temp1==NULL)
    {
        head = temp;
    }
    else 
    {
        while(temp1->link!=NULL)
    {
        temp1 = temp1->link;
    }
    temp1->link = temp;
    }
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
void delete_node(int n)
{
    node* temp = head;
    if(n==1)
    {
       
        head = temp->link;
        free(temp);
        return;
    }
    for(int i=0;i<n-2;i++)
    {
        temp = temp->link; 
    }
    node* temp1 = temp->link;
    temp->link = temp1->link;
    free(temp1);
    
}
int main()
{
   head = NULL;
   Insertatend(2);// 2
   Insertatend(3);// 2 3 
   Insertatend(4); // 2 3 4 
   Insertatend(5); // 2 3 4 5 
   print();
   int n;
   cout<<"enter the position"<<endl;
   cin>>n;
   delete_node(n);
   print();
    return 0;
}
