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
void middle(Node *head){
	if(head==NULL)
		return ;
	else{
		Node *curr;
		int i,c=0;
		for(curr=head; curr!=NULL; curr=curr->next)
			c++;
		curr=head;
		for(i=0;i<c/2;i++){
			curr=curr->next;
		}
		cout<<"Middle of the Linkedlist is : "<<curr->data;
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
	cout<<"Linkedlist is : ";
	printlist(head);
	middle(head);
	return 0;
}
