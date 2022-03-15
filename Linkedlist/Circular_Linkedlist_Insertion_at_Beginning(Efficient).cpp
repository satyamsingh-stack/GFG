/*Time Complixity= O(1)*/
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
Node *insertBegin(Node *head,int x){
	Node *temp=new Node(x);
	if(head==NULL){
		temp->next=temp;
		return temp;
	}
	else{
		temp->next=head->next;
		head->next=temp;
		int t=head->data;
		head->data=temp->data;
		temp->data=t;
		return head;
	}
}
void printlist(Node *head){
	if(head==NULL)
		return ;
	Node *curr=head;
	do{
		cout<<curr->data<<" ";
		curr=curr->next;
	}
	while(curr!=head);
	cout<<endl;
}
int main(){
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=new Node(40);
	head->next->next->next->next=head;
	cout<<"Linkedlist is : ";
	printlist(head);
	cout<<"After Insertion in Beginning Linkedlist is : ";
	head=insertBegin(head,5);
	printlist(head);
	return 0;
}
