//min and max of tree 
#include<iostream>
#include<algorithm>
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
void min(Bstnode* root)
{
    if(root==NULL)
    {
        cout<<"Tree is empty"<<endl;
    }
    if(root->left==NULL && root->right==NULL)
    {
        cout<<root->data;
    }
    Bstnode* temp = root;
    while(temp->left!=NULL)
    {
        temp = temp->left;
    }
    cout<<temp->data;
}
void max(Bstnode* root)
{
    if(root==NULL)
    {
        cout<<"Tree is empty"<<endl;
    }
    if(root->left==NULL && root->right==NULL)
    {
        cout<<root->data;
    }
    Bstnode* temp = root;
    while(temp->right!=NULL)
    {
        temp = temp->right;
    }
    cout<<temp->data<<endl;
}
int height(Bstnode* node)  
{  
    if (node == NULL)  
        return 0;  
    else
    {  
        /* compute the depth of each subtree */
        int lDepth = height(node->left);  
        int rDepth = height(node->right);  
      
        /* use the larger one */
        if (lDepth > rDepth)  
            return(lDepth + 1);  
        else return(rDepth + 1);  
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
  //min(root);
  //cout<<endl;
  //max(root);
  cout<<height(root);
  
  
}
