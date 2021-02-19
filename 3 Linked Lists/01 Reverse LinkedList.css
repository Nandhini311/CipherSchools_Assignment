#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};

Node* revLinkedList(Node* head)
{
    Node* curr = head;
    Node* prev = NULL, *next = NULL;
    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
    }
    Node* revhead = prev;
    return revhead;
 }

void printlist(Node *head){
  Node *curr = head;
  while(curr!=NULL){
    cout<<curr->data<<"->";
    curr = curr->next;
  }
}
int main()
{
  Node* head = new Node(10);
  head->next = new Node(20);
  head->next->next = new Node(30);
  head->next->next->next = new Node(40);
  Node* revhead = revLinkedList(head);
  printlist(revhead);
  return 0;
}
