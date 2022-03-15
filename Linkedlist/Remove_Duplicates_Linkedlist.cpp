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
Node *removedups(Node *head){
	Node *curr=head;
	while(curr!=NULL && curr->next!=NULL){
		if(curr->data==curr->next->data){
			Node *temp=curr->next;
			curr->next=curr->next->next;
			delete temp;
		}
		else
			curr=curr->next;
	}
	return head;
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
	head->next->next->next=new Node(30);
	head->next->next->next->next=new Node(30);
	cout<<"Intially Linkedlist is : ";
	printlist(head);
	head=removedups(head);
	cout<<"After Removing Duplicates, Linkedlist is : ";
	printlist(head);
	return 0;
}
