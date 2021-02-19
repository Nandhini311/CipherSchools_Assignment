#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  Node* next;
};

Node* reverselist(Node* head)
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

Node* newNode(int data)
{
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

bool isPallindrome(Node* head)
{
    if(head==NULL)
    {
        cout<<"list is empty";
        return true;
    }
    Node* slow=head;
    Node* fast=head;
    //finding the middle element
    while(fast!=NULL&&fast->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    Node* rev = reverselist(slow->next);
    Node* curr = head;
    while(rev!=NULL)
    {
        if(rev->data!=curr->data)
        {
           cout<<"Not a pallindrome";
           return false;
        }
        rev = rev->next;
        curr = curr->next;
    }
    return true;

}
void printList(Node* node)
{
    while(node!=NULL){
        cout<<node->data<<"->";
        node = node->next;
    }
}

void push(struct Node** head_ref, char new_data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    new_node->data = new_data;

    new_node->next = (*head_ref);

    (*head_ref) = new_node;
}



int main()
{
    Node* head = NULL;
    char str[] = "abacaba";
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        push(&head, str[i]);}

    cout<<isPallindrome(head);
    return 0;
    }
