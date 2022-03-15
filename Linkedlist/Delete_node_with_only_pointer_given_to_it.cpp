#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *next;
	Node(int x){
		data=x;
		next=NULL;
	}
};
void deletenode(Node *ptr){
	Node *temp=ptr->next;
	ptr->data=temp->data;
	ptr->next=temp->next;
	delete temp;
}
void printlist(Node *head){
	Node *curr=head;
	while(curr!=NULL){
		cout<<curr->data<<" ";
		curr=curr->next;
	}
	cout<<endl;
}
int main(){
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	Node *ptr=new Node(40);
	head->next->next->next=ptr;
	head->next->next->next->next=new Node(50);
	head->next->next->next->next->next=new Node(60);
	cout<<"Linkedlist is : ";
	printlist(head);
	deletenode(ptr);
	cout<<"After Deletion of Particular node, Linkedlist is : ";
	printlist(head);
	return 0;
}
