#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    Node (int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

void preorder(Node* root)
{
    Node* curr = root;
    stack <Node*> s;
    s.push(curr);
    if(s.empty()==false)
    {
    curr = s.top();
    cout<<curr->data<<endl;
    s.push();
    if(curr->right) curr = curr->right;
     //to make sure left is processed first//}
    if(curr->left) curr = curr->left;
    }
}
int main()
{
 
    struct Node *root = new Node(1);
    root->left        = new Node(2);
    root->right       = new Node(3);
    root->right->left = new Node(6);
    root->left->left  = new Node(4);
    root->left->right = new Node(5);
 
    inorder(root);
    return 0;
}
