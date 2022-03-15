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
int length_ofloop(Node *head){
	if(head==NULL)
		return 0;
	else{
		Node *slow=head, *fast=head;
		int count=0;
		while(fast!=NULL && fast->next!=NULL){
			slow=slow->next;
			fast=fast->next->next;
			if(slow==fast){
				Node *temp=slow;
				while(temp->next!=fast){
					count++;
					temp=temp->next;
				}
				return count+1;
			}
		}
		return count;
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
	cout<<"Intially Linkedlist is : ";
	printlist(head);
	head->next->next->next->next->next=head->next;
	int ans=length_ofloop(head);
	cout<<"Length of the Loop is : "<<ans;
	return 0;
}
