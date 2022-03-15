#include<bits/stdc++.h>
using namespace std;
struct Node{
	int key;
	Node *left,*right;
	Node(int k){
		key=k;
		left=right=NULL;
	}
};
Node *insert(Node *root,int x){
	if(root==NULL)
		return new Node(x);
	if(root->key>x)
		root->left=insert(root->left,x);
	if(root->key<x)
		root->right=insert(root->right,x);
	return root;
}
Node *inorder(Node *root){
	if(root!=NULL){
		inorder(root->left);
		cout<<root->key<<" ";
		inorder(root->right);
	}
}
int main(){
	Node *root=new Node(10);
	root->left=new Node(5);
	root->right=new Node(15);
	root->right->left=new Node(12);
	root->right->right=new Node(18);
	cout<<"Inorder Traversal is : ";
	inorder(root);
	cout<<endl;
	cout<<"After insertion Node, Tree is : ";
	root=insert(root,20);
	inorder(root);
	return 0;
}
