/*Time Complixity=O(1)*/
#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *next;
	Node *prev;
	Node(int x){
		data=x;
		next=prev=NULL;
	}
};
void printlist(Node *head){
	Node *curr=head;
	while(curr!=NULL){
		cout<<curr->data<<" ";
		curr=curr->next;
	}
	cout<<endl;
}
Node *deletion(Node *head){
	if(head==NULL)
		return NULL;
	else if(head->next==NULL)
		return NULL;
	else{
		Node *temp=head;
		head=head->next;
		head->prev=NULL;
		delete(temp);
		return head;
//		Node *temp=head->next;
//		delete(head);
//		temp->prev=NULL;
//		return temp;
	}
}
int main(){
	Node *head=new Node(10);
	Node *temp1=new Node(20);
	Node *temp2=new Node(30);
	head->next=temp1;
	temp1->prev=head;
	temp1->next=temp2;
	temp2->prev=temp1;
	cout<<"Linkedlist is : ";
	printlist(head);
	cout<<"After Deletion Linkedlist is : ";
	head=deletion(head);
	printlist(head);
	return 0;
}
