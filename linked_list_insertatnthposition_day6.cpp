#include <iostream>
using namespace std;
 
struct node{
    int data;
    node* link;
};
node* head;
void insert(int data,int n)
{
    node* temp = new node();
    temp->data = data;
    temp->link = NULL;
    if(n==1)// inserting at beginning
    {
        temp->link = head;
        head = temp;
        return;
    }
    node* temp1 = head;
    for(int i=0;i<n-2;i++)
    {
        temp1=temp1->link;
    }
    temp->link = temp1->link;
    temp1->link = temp;
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
int main()
{
  head = NULL; 
  insert(2,1);//2 
  insert(3,2);//2 3 
  insert(6,1);//6 2 3 
  insert(7,2);// 6 7 2 3 
  print();
  

    return 0;
}
