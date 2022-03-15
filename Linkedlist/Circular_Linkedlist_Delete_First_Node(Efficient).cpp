/*Time Complixity = O(1)*/
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
	else if(head->next==head){
		delete(head);
		return NULL;
	}
	else{
		head->data=head->next->data;
		Node *temp=head->next;
		head->next=head->next->next;
		delete temp;
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
	cout<<"After Delete First Node Linkedlist is : ";
	head=deletion(head);
	printlist(head);
	return 0;
}
