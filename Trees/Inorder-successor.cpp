//INORDER SUCCESSOR 
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
Bstnode* Find(Bstnode*root, int data) {
	if(root == NULL) return NULL;
	else if(root->data == data) return root;
	else if(root->data < data) return Find(root->right,data);
	else return Find(root->left,data);
}

Bstnode* FindMin(Bstnode* root) {
	if(root == NULL) return NULL;
	while(root->left != NULL)
		root = root->left;
	return root;
}
Bstnode* inordersuccessor(Bstnode* root , int data)
{
    Bstnode* current = Find(root,data);
    if(current==NULL)
    {
        return NULL;
    }
    if(current->right != NULL) {  //Case 1: Node has right subtree
		return FindMin(current->right); // O(h)
	}
	else {   //Case 2: No right subtree  - O(h)
		Bstnode* successor = NULL;
		Bstnode* ancestor = root;
		while(ancestor != current) {
			if(current->data < ancestor->data) {
				successor = ancestor; // so far this is the deepest node for which current node is in left
				ancestor = ancestor->left;
			}
			else
				ancestor = ancestor->right;
		}
		return successor;
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
  Bstnode* successor = inordersuccessor(root,12);
	if(successor == NULL) cout<<"No successor Found\n";
	else
    cout<<"Successor is "<<successor->data<<"\n";
  
}
