#include <iostream>
using namespace std;
//making a node 
struct node{
    int data; //data part 
    node* link; // link part 
};
node* head; // link to first node and this is a global variable 
void Insertatbegin(int x)
{
    node* temp = new node();
    temp->data=x;
    temp->link=head;
    head = temp;
}
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
void Print()
{
    node* temp = head;
    cout<<"list is : ";
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->link;
    }
    cout<<endl;
}
int main()
{
   head = NULL; //initially there is no node 
   // we take data from user 
   int n;
   cout<<"Enter how many numbers you want"<<endl;
   cin>>n;//how many numbers 
   for(int i=0;i<n;i++)
   {
       int a;
       cin>>a;
       //Insertatbegin(a);
       Insertatend(a);
       Print();
   }
    
}
