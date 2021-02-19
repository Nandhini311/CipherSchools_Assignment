#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  Node* next;
};

void getIntersection(Node* head1, Node* head2)
{
    Node* curr1 = head1;
    Node* curr2 = head2;
    while(curr1!=NULL && curr2!=NULL)
    {
        if(curr1->data > curr2->data)
        {
            curr2 = curr2->next;
        }
        else if(curr2->data > curr1->data)
        {
            curr1 = curr1->next;
        }
        else  if(curr2==curr1)
        {
           cout<<curr1->data;
           break;
        }
    }
}
Node* newNode(int data)
{
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}



void printList(Node* node)
{
    while(node!=NULL){
        cout<<node->data<<"->";
        node = node->next;
    }
}



int main()
{
    Node* newNode;

    // Addition of new nodes
    Node* head1 = new Node();
    head1->data = 10;

    Node* head2 = new Node();
    head2->data = 3;

    newNode = new Node();
    newNode->data = 6;
    head2->next = newNode;

    newNode = new Node();
    newNode->data = 9;
    head2->next->next = newNode;

    newNode = new Node();
    newNode->data = 15;
    head1->next = newNode;
    head2->next->next->next = newNode;

    newNode = new Node();
    newNode->data = 30;
    head1->next->next = newNode;

    head1->next->next->next = NULL;

    getIntersection(head1, head2);
    return 0;
    }
