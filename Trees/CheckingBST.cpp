//Checking for Binary Tree 
#include<iostream>
#include <bits/stdc++.h> 
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
bool isBinaryTree(Bstnode* root, int min , int max)
{
    if(root==NULL)
    {
        return true;
    }
    if(root->data>min && root->data<max && isBinaryTree(root->left,min,root->data)&&isBinaryTree(root->right,root->data,max))
    {
        return true;
    }
    else
    {
        return false;
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
  if(isBinaryTree(root,INT_MIN,INT_MAX))
  {
      cout<<"YES"<<endl;
  }
  else
  {
      cout<<"NO";
  }
}
