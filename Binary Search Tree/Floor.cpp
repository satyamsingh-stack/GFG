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
Node *inorder(Node *root){
	if(root!=NULL){
		inorder(root->left);
		cout<<root->key<<" ";
		inorder(root->right);
	}
}
int floor(Node *root,int x){
	Node *res=NULL;
	while(root!=NULL){
		if(root->key==x)
			return root->key;
		else if(root->key>x)
			root=root->left;
		else{
			res=root;
			root=root->right;
		}
	}
	return res->key;
}
int main(){
	Node *root=new Node(50);
	root->left=new Node(30);
	root->left->left=new Node(20);
	root->left->right=new Node(40);
	root->right=new Node(70);
	root->right->left=new Node(60);
	root->right->right=new Node(80);
	root->right->left->left=new Node(55);
	root->right->left->right=new Node(65);
	cout<<"Tree is : ";
	inorder(root);
	cout<<endl;
	cout<<"Floor of the Tree is : "<<floor(root,35);
	return 0;
}
