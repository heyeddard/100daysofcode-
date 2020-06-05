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
node* delete_all()
{
    node* temp = head;
    while(temp!=NULL)
    {
        node* next = temp->link;
        free(temp);
        temp = next;
    }
    return temp;
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
    node* g = delete_all();
    print(g);
    
    
    
    return 0;
}
