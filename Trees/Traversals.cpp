//LEVEL ORDER // PRE POST INORDER 
#include <iostream>
#include <queue>
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
void levelorder(Bstnode* root)
{
    if(root==NULL)
    {
        cout<<"Tree is empty"<<endl;
    }
    queue<Bstnode*> Q;
    Q.push(root);
    while(!Q.empty())
    {
        Bstnode* temp = Q.front();
        cout<<temp->data<<" ";
        if(temp->left!=NULL)
        {
            Q.push(temp->left);
        }
        if(temp->right!=NULL)
        {
            Q.push(temp->right);
        }
        Q.pop();
    }
}
void preorder(Bstnode* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
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
void postorder(Bstnode* root)
{
    if(root==NULL)
    {
        return;
    }
   
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
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
  cout<<"LEVEL ORDER:"<<endl;
  levelorder(root);
  cout<<endl;
  cout<<"PRE ORDER"<<endl;
  preorder(root);
  cout<<endl;
  cout<<"IN ORDER"<<endl;
  inorder(root);
  cout<<endl;
  cout<<"POST ORDER"<<endl;
  postorder(root);
  cout<<endl;
  
  
  
  
}
