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
Node *deletekth(Node *head,int k){
	if(k==1){
		head->data=head->next->data;
		Node *temp=head->next;
		head->next=head->next->next;
		delete temp;
		return head;
	}
	else{
		Node *curr=head;
		int i;
		for(i=0;i<k-2;i++)
			curr=curr->next;
		Node *temp=curr->next;
		curr->next=curr->next->next;
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
	head=deletekth(head,4);
	cout<<"After Delete Linkedlist is : ";
	printlist(head);
	return 0;
}
