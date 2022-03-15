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
	if(head==NULL)
		return -1;
	if(head->data==x)
		return 1;
	else{
		int res=search(head->next,x);
		if(res==-1)
			return -1;
		else
			return res+1;
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
	head->next->next->next=new Node(50);
	cout<<"Linkedlist is : ";
	printlist(head);
	int x,ans;
	cout<<"Enter Element Which is to be Search : ";
	cin>>x;
	ans=search(head,x);
	if(ans>=0)
		cout<<"Found at Position : "<<ans;
	else
		cout<<"Not Found";
	return 0;
}
