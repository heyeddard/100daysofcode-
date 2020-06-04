// node swapping without data 
#include <iostream>
using namespace std;
struct node{
    int data;
    node* link;
};
node* head;
node* px;
node* prevx;
node* py;
node* prevy;
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
void search(int x, int y)
{
  node* p = head;
  node* prev = NULL;
  // searching for x 
  while(p!=NULL && p->data!=x)
  {
      prev = p;
      p = p->link;
  }
  px = p;
  prevx = prev;
  // searching for y 
  p = head;
  prev = NULL;
  while(p!=NULL && p->data!=y)
  {
      prev = p;
      p = p->link;
  }
  py = p;
  prevy = prev;
  
}
void swap()
{
    node* temp = py->link;
    py->link = px->link;
    px->link = temp;
    if(prevx==NULL)
    {
        py = head;
        prevy->link = px;
    }
    if(prevy==NULL)
    {
        px = head;
        prevx->link = py;
    }
    if(prevx!=NULL && prevy!=NULL)
    {
        prevy->link = px;
        prevx->link = py;
    }
}
int main()
{
    head = NULL;
    insert(14);
    insert(20);
    insert(13);
    insert(12);
    insert(15);
    insert(10);
    print();
    int x = 12;
    int y = 20;
    search(12,20);
    swap();
    print();
    
}
