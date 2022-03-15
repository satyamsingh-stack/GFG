//better than recursive
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
Node *preorder(Node *root){
	if(root!=NULL){
		cout<<root->key<<" ";
		preorder(root->left);
		preorder(root->right);
	}
}
bool searching(Node *root,int x){
	while(root!=NULL){
		if(root->key==x)
			return true;
		else if(root->key>x)
			root=root->left;
		else
			root=root->right;
	}
	return false;
}
int main(){
	Node *root=new Node(15);
	root->left=new Node(5);
	root->right=new Node(20);
	root->left->left=new Node(3);
	root->right->left=new Node(18);
	root->right->right=new Node(80);
	root->right->left->left=new Node(60);
	cout<<"Tree Element are : ";
	preorder(root);
	cout<<endl;
	cout<<searching(root,18);
	return 0;
}
