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
   if(root!=NULL)
  {
     inorder(root->left);
     inorder(root->right);
     cout<<root->data;
     
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
