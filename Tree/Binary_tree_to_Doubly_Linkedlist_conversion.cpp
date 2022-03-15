#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *left;
	Node *right;
	Node(int k){
		data=k;
		left=right=NULL;
	}
};
void printlist(Node *head){
	Node *curr=head;
	while(curr!=NULL){
		cout<<curr->data<<" ";
		curr=curr->right;
	}
	cout<<endl;
}
/*static keyword is used, variable or data member can not modified again. It is allocated lifetime of program.*/
Node *btodll(Node *root){
	static Node *prev=NULL;
	if(root==NULL)	return root;
	Node *head=btodll(root->left);
	if(prev==NULL)	head=root;
	else{
		root->left=prev;
		prev->right=root;
	}
	prev=root;
	btodll(root->right);
	return head;
}
int main(){
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	cout<<"Conversion of Binary Tree to Doubly Linkedlist"<<endl;
	Node *head=btodll(root);
	printlist(head);
	return 0;
}
