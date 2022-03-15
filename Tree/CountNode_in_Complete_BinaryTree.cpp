#include<iostream>
#include<cmath>
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
int countnode(Node *root){
	int lh=0,rh=0;
	Node *curr=root;
	while(curr!=NULL){
		lh++;
		curr=curr->left;
	}
	curr=root;
	while(curr!=NULL){
		rh++;
		curr=curr->right;
	}
	if(lh==rh)
		return pow(2,lh)-1;
	else
		return 1+countnode(root->left)+countnode(root->right);
}
int main(){
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	cout<<"Count of Node of Complete Binary Tree : "<<countnode(root);
	return 0;
}
