//DELETE A NODE FROM TREE 
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
Bstnode* FindMin(Bstnode* root)
{
	while(root->left != NULL) root = root->left;
	return root;
}
Bstnode* deletenode(Bstnode* root, int data)
{
    if(root==NULL)
    {
        return root;
    }
    else if(data<root->data)
    {
        root->left = deletenode(root->left,data);
    }
     else if(data>root->data)
    {
        root->right = deletenode(root->right,data);
    }
    else
    {
        if(root->left==NULL && root->right==NULL)
        {
          delete root;
          root = NULL;
        }
        else if(root->left==NULL)
        {
            Bstnode* temp = root;
            root = root->right;
            delete temp;
            
        }
        else if(root->right==NULL)
        {
            Bstnode* temp = root;
            root = root->left;
            delete temp;
        }
        else
        {
            Bstnode* temp = FindMin(root->right);
            root->data = temp->data;
            root->right = deletenode(root->right,temp->data);
            
        }
    }
    return root;
}
void inorder(Bstnode* root)
{
    if(root==NULL)
    {
        return;
    }
   
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
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
  inorder(root);
  root = deletenode(root,17);
  cout<<endl;
  inorder(root);
  
}
