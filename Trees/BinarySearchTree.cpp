//basic tree structure 
#include<iostream>
using namespace std;
struct Bstnode
{
    int data;
    Bstnode* left;
    Bstnode* right;
};
Bstnode* createnode(int x)
{
    Bstnode* newnode = new Bstnode();
    newnode->data = x;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
Bstnode* insert(Bstnode* root, int x)
{
    if(root==NULL)
    {
        root = createnode(x);
       
    }
    else if (x<=root->data)
    {
        root->left = insert(root->left,x);
    }
    else
    {
        root->right = insert(root->right,x);
    }
    return root;
}
bool search(Bstnode* root , int x)
{
    if(root==NULL)
    {
      return false;
    }
    else if(x==root->data)
    {
        return true;
    }
    else if(x<=root->data)
    {
        return search(root->left,x);
    }
    else
    {
        return search(root->right,x);
    }
}
int main()
{
  Bstnode* root;
  root = NULL;
  root = insert(root,15);// root = 200 
  root = insert(root,10);
  root = insert(root,20);
  root = insert(root,8);
  root = insert(root,12);
  root = insert(root,17);
  root = insert(root,25);
  int number;
	cout<<"Enter number be searched\n";
	cin>>number;
	//If number is found, print "FOUND"
	if(search(root,number) == true) cout<<"Found\n";
	else cout<<"Not Found\n";
}
