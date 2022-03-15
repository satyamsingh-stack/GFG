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
void nth_from_last(Node *head,int n){
	Node *curr;
	int len=0;
	for(curr=head; curr!=NULL; curr=curr->next)
		len++;
	if(len<n)
		return ;
	curr=head;
	for(int i=1;i<len-n+1;i++)
		curr=curr->next;
	cout<<n<<"th Node From Last is : "<<curr->data;
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
	cout<<"Linkedlist is : ";
	printlist(head);
	int n;
	cout<<"Enter The Value of n : ";
	cin>>n;
	nth_from_last(head,n);
	return 0;
}
