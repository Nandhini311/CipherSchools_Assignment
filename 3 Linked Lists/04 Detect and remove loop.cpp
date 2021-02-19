#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  Node* next;
};

Node* newNode(int data)
{
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

void detectRemoveLoop(Node* head)
{
    Node* slow = head, *fast = head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
            break;
    }
    if(slow!=fast)
        return;
    slow=head;
    
    /*the amount of distance traveled by s is equal to amount of distance traveled by f 
    until they get equal*/
    while(slow->next!=fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }
    fast->next = NULL;
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
    Node* head = newNode(50);
    head->next = newNode(20);
    head->next->next = newNode(15);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(10);

    //create a loop for testing
    head->next->next->next->next->next = head->next->next;

    detectRemoveLoop(head);
    printList(head);
    return 0;
    }
