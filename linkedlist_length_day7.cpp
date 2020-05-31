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
int length_recursive(node* temp)
{
      if(temp==NULL)
      {
          return 0;
      }
      else 
      {
          return 1 + length_recursive(temp->link);
      }
}
int main()
{
    head = NULL;
    insert(2);// 2
    insert(3);// 3 2 
    insert(4); // 4 3 2 
    insert(1); // 1 4 3 2 
    print();
   // cout<<length_iterative();
    cout<<length_recursive(head);

    return 0;
}
