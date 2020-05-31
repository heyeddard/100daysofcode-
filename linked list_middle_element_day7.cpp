#include <iostream>

using namespace std;
struct node
{
    int data;
    node* link;
};
node* head;
void insert(int data) // this insert node at begining.
{
    node* temp = new node();
    temp->data = data;
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
void midddle_even(int m)
{
    node* temp = head;
    for(int i=1;i<m;i++)
    {
        temp = temp->link;
    }
    node* temp1 = temp->link;
    
    cout<<temp->data<<" "<<temp1->data;
}
void midddle_odd(int m)
{
    node* temp = head;
    for(int i=1;i<=m;i++)
    {
        temp = temp->link;
    }
   
    
    cout<<temp->data;
    cout<<endl;
}
int main()
{
    head = NULL;
    //insert(6);
    insert(5);
    
    insert(4); 
    insert(3); 
    insert(2);
    insert(1);
    print();
   int l = length_iterative();
   int m = l/2;
   if(l%2==0)
   {
   midddle_even(m);
   }
   else
   {
       midddle_odd(m);
   }
   
    

    return 0;
}
