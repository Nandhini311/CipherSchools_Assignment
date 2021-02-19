#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  Node* next;
};

Node* RemoveDuplicates(Node *head)
{
    Node* curr = head;
    while(curr!=NULL && curr->next!=NULL)
    {
        if(curr->data != curr->next->data)
        {
            curr=curr->next;
        }
        Node* temp = curr->next;
        curr->next = curr->next->next;
        delete temp;
    }
    return head;
}

Node* newNode(int key)
{
    Node *temp = new Node;
    temp->data = key;
    temp->next = NULL;
    return temp;
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
    Node* head = newNode(10);
    head->next = newNode(10);
    head->next->next = newNode(20);
    head->next->next->next = newNode(20);
    head->next->next->next->next->next = newNode(30);
    head->next->next->next->next->next->next = newNode(40);
    head->next->next->next->next->next->next->next = newNode(40);
    printList(head);

    Node* newHead = RemoveDuplicates(head);
    printList(newHead);
    return 0;
    }
