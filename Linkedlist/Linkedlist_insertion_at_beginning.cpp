#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
	Node(int x){
		data=x;
		next=NULL;
	}
};
Node *insertion_at_beginning(Node *head,int x){
	Node *temp=new Node(x);
	temp->next=head;
	return temp;
}
void printlist(Node *head){
	Node *curr=head;
	while(curr!=NULL){
		cout<<curr->data<<" ";
		curr=curr->next;
	}
}
int main(){
	Node *head=NULL;
	head=insertion_at_beginning(head,30);
	head=insertion_at_beginning(head,20);
	head=insertion_at_beginning(head,10);
	printlist(head);
	return 0;
}
