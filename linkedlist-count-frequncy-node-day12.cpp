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
int count(int d)
{
    int x = d;
    int c=0;
    node* temp = head;
    while(temp!=NULL)
    {
        if(temp->data==x)
        {
            c++;
        }
        temp = temp->link;
    }
    return c;
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
    print();
    int c = count(1);
    cout<<c<<endl;
    return 0;
}
