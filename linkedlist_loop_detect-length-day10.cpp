/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
struct node
{
   int data;
   node* link;
};
node* head=NULL;

void insert(int x){
    node* temp = new node();
    temp->data = x;
    temp->link = head;
    head = temp;
}
node* check_loop()
{
   node* p = head;
   node* q = head;
   while(p&&q&&q->link)
   {
       p = p->link;
       q = q->link->link;
       if(p==q)
       
       {
           
           return p;
       }
       
   }
   return NULL;
    
}
void print()
{
    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->link;
    }
}
int count_nodes(node* p)
{
    cout<<"Loop is found"<<endl;
    int count = 1;
    node* temp = p;
    node* temp1 = p->link;
    while(temp1!=NULL)
    {
        if(temp1==p)
        {
            break;
        }
        temp1=temp1->link;
        count++;
    }
    return count;
}
int main()
{  
    head = NULL;
    insert(5);
    insert(4);
    insert(3);
    insert(2);
    insert(1);
    head->link->link->link->link->link = head->link->link;
    //print();
    
    node* temp = check_loop();
    if(temp!=NULL)
    {
    cout<<"The length of loop is:"<<count_nodes(temp);
    }
    else
    {
        cout<<"Loop is not found";
    }
    
    
}
