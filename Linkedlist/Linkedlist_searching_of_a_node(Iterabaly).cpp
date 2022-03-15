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
int search(Node *head,int x){
	Node *curr=head;
	int pos=1;
	while(curr!=NULL){
		if(curr->data==x)
			return pos;
		else{
			curr=curr->next;
			pos++;
		}
	}
	return -1;
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
	int x,ans;
	cout<<"Enter the Node which is to be search : ";
	cin>>x;
	ans=search(head,x);
	if(ans>=0)
		cout<<"Node Found at Postion : "<<ans<<endl;
	else
		cout<<"Node Not Found"<<endl;
	return 0;
}
