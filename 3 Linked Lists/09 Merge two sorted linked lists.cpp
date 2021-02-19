#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}

Node *sortedMerge(Node *head1,Node *head2){
    if(head1==NULL)return head1;
    if(head2==NULL)return head2;
    Node* curr1 = head1;
    Node* curr2 = head2;
    Node *head=NULL,*tail=NULL;
    if(curr1->data <= curr2->data){
        head=tail=curr1;
        curr1=curr1->next;
    }
    else{
        head=tail=curr2;
        curr2=curr2->next;
    }
    while(curr1!=NULL&&curr2!=NULL){
        if(curr1->data<=curr2->data){
            tail->next=curr1;
            tail=curr1;curr1=curr1->next;
        }
        else{
            tail->next=curr2;tail=curr2;curr2=curr2->next;
        }
    }
    if(curr1==NULL){tail->next=curr2;}
    else{
        tail->next=curr1;
    }
    return head;
}

int main() 
{ 
	Node *head1 = new Node(10);
  head1->next=new Node(20);
	head1->next->next=new Node(30);
	Node *head2=new Node(5);
	head2->next=new Node(35);
	printlist(sortedMerge(head1, head2));
	return 0;
} 
