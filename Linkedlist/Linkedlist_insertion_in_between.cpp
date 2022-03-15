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
Node *insert(Node *head,int x,int y){
	if(head==NULL)
		return NULL;
	else{
		Node *curr=head;
		while(curr->data!=x){
			curr=curr->next;
			if(curr==NULL)
				cout<<"Element is not Found"<<endl;
		}
		Node *temp=new Node(y);
		temp->next=curr->next;
		curr->next=temp;
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
	head->next->next=new Node(40);
	cout<<"Linkedlist is : ";
	printlist(head);
	head=insert(head,10,30);
	cout<<"After Insertion Linkedlist is : ";
	printlist(head);
	return 0;
}
