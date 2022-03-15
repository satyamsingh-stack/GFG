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
Node *deletion(Node *head,int x){
	if(head==NULL)
		return NULL;
	else if(head->next==head){
		delete head;
		return NULL;
	}
	else{
		Node *curr=head;
		Node *prev=NULL;
		while(curr->data!=x){
			prev=curr;
			curr=curr->next;
			if(curr==NULL){
				cout<<"Node Not Found";
			}
		}
		prev->next=curr->next;
		delete curr;
		return head;
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
	head->next->next->next=new Node(40);
	head->next->next->next->next=new Node(50);
	cout<<"Linkedlist is : ";
	printlist(head);
	cout<<"After Delete kth Node, Linkedlist is : ";
	head=deletion(head,30);
	printlist(head);
	return 0;
}
