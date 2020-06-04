// changing nodes pairwise
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
void print(node* a)
{
    node* temp = a;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->link;
    }
    cout<<endl;
}
void swap_pair()
{
    node* p = head;
    head  = p->link;// always a start for new linked  list 
    while(1)
    {
        node* q = p->link;
        node* temp = q->link;
        q->link = p;
        if(temp == NULL)
	{
		p->link = NULL;
		break;
	}
	
	if(temp->link == NULL)
	{
		p->link = temp;
		break;		
	}
        p->link = temp->link;
        p = temp;
    }
    
    
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
    print(head);
    swap_pair();
    print(head);
    
}
