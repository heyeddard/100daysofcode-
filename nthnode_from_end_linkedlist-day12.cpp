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
void print(node* s)
{
    node* temp = s;
    if(temp!=NULL)
    {
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->link;
    }
    cout<<endl;
    }
    else
    {
        cout<<"all nodes have been deleted"<<endl;
    }
  
}
int length()
{
 
    int l=0;
    node* temp = head;
    while(temp!=NULL)
    {
        
        temp = temp->link;
        l++;
    }
    return l;
    
}
void node_end_n(int pos,int l)
{
    int p = l-pos+1;// 6-2+1 = 5
    node* temp = head;
    for(int i=0;i<p-1;i++)
    {
        temp = temp->link;
        
    }
    cout<<temp->data;
}
int main()
{
    head=NULL;
    insert(6);
    insert(4);
    insert(1);
    insert(1);
    insert(2);
    insert(1);
    print(head);
    int len = length();
    node_end_n(5,len);
    
   
    
    
    
    return 0;
}
