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
Node *getsue(Node *root){
	Node *curr=root->right;
	while(curr!=NULL && curr->left!=NULL)
		curr=curr->left;
	return curr;
}
Node *deletion(Node *root,int x){
	if(root==NULL)
		return NULL;
	if(root->key>x)
		root->left=deletion(root->left,x);
	else if(root->key<x)
		root->right=deletion(root->right,x);
	else{
		if(root->left==NULL){
			Node *temp=root->right;
			delete root;
			return temp;
		}
		else if(root->right==NULL){
			Node *temp=root->left;
			delete root;
			return temp;
		}
		else{
			Node *temp=getsue(root);
			root->key=temp->key;
			root->right=deletion(root->right,temp->key);
		}
	}
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
	Node *root=new Node(50);
	root->left=new Node(30);
	root->right=new Node(70);
	root->right->left=new Node(60);
	root->right->right=new Node(80);
	cout<<"Tree is : ";
	inorder(root);
	cout<<endl;
	root=deletion(root,30);
	cout<<"After deletion : ";
	inorder(root);
	return 0;
}
