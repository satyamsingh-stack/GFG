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
int ceil(Node *root,int x){
	Node *res=NULL;
	while(root!=NULL){
		if(root->key==x)
			return root->key;
		else if(root->key>x){
			res=root;
			root=root->left;
		}
		else
			root=root->right;
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
	root->right->right=new Node(78);
	root->right->left->left=new Node(55);
	root->right->left->right=new Node(65);
	cout<<"Tree is : ";
	inorder(root);
	cout<<endl;
	cout<<"Ceil of the Tree is : "<<ceil(root,34);
	return 0; 
}
