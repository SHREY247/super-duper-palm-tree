/*Given A binary Tree. Your task is to remove all the half nodes (which has only one child) and return the INORDER traversal of the updated binary tree.

Input Format

In the function a pointer to the root node of the binary tree is passed.

Output Format

Return an integer vector containing INORDER traversal of the updated binary tree.
*/

#include <bits/stdc++.h>
using namespace std;
 
struct Node {
    int key;
    Node* left, *right;
};

void inorder(Node* root, vector<int> &v)
{
    if(root == NULL) return;
    if(root->left) inorder(root->left, v);
    v.push_back(root->key);
    if(root->right) inorder(root->right, v);
}

Node *help(Node *root)
{
   //add code here.
   if(root==NULL) return NULL;
   if(root->right) root->right = help(root->right);
   if(root->left) root->left = help(root->left);
   if( (root->left != NULL && root->right == NULL) or (root->left == NULL && root->right !=NULL) )
   {
       if(root->left) root = root->left;
       else root = root->right;
       root = help(root);
   }
   return root;
   
}

vector<int> removeHalfNodes(Node *root)
{
   //add code here.
   root = help(root);
   vector<int> v;
   inorder(root, v);
   return v;
   
}
