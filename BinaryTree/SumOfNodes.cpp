/*Sum of Nodes
Given a binary tree with N nodes. Your task is to return the sum of all N nodes.

Input Format

In the function a pointer to the root node of the binary tree is passed.

Output Format

Return a integer representing sum of all nodes
*/

#include <bits/stdc++.h>
using namespace std;
 
struct Node {
    int key;
    Node* left, *right;
};

int sumBT(Node* root)
{
    // Code here
    int res = 0;
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        Node* f = q.front();
        q.pop();
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
        res += f->key;
    }
    return res;
}
