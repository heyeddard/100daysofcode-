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
void reverse()
{
    node* curr = head;
    node* next;
    node* prev = NULL;
    while(curr!=NULL)
    {
        next = curr->link;
        curr->link = prev;// for fiirst time it will be null 
        prev = curr;
        curr = next;
    }
    head = prev;
}
int main()
{
    head = NULL;
    insert(2);// 2
    insert(3);// 3 2 
    insert(4); // 4 3 2 
    insert(1); // 1 4 3 2 
    print();
   reverse();
   print();

    return 0;
}
