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
Node *deletion(Node *head){
	if(head==NULL)
		return NULL;
	else{
		Node *temp=head->next;
		delete(head);
		return temp;
	}
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
	cout<<"Before Deletion Linkedlist is : ";
	printlist(head);
	head=deletion(head);
	cout<<"After Deletion of First Node Linkedlist is : ";
	printlist(head);
	return 0;
}
