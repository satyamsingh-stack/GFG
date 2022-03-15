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
int inorder(Node *root){
	if(root!=NULL){
		inorder(root->left);
		cout<<root->key<<" ";
		inorder(root->right);
	}
}
Node *prevv=NULL, *first=NULL, *second=NULL;
void fixbst(Node *root){
	if(root==NULL)
		return ;
	fixbst(root->left);
	if(prevv!=NULL && root->key<prevv->key){
		if(first==NULL)
			first=prevv;
		second=root;
	}
	prevv=root;
	fixbst(root->right);
}
int main(){
	Node *root=new Node(20);
	root->left=new Node(60);
	root->left->left=new Node(4);
	root->left->right=new Node(10);
	root->right=new Node(80);
	root->right->left=new Node(8);
	root->right->right=new Node(100);
	cout<<"Intially Tree is : ";
	inorder(root);
	cout<<endl;
	fixbst(root);
	int temp=first->key;
	first->key=second->key;
	second->key=temp;
	cout<<"After Fix : ";
	inorder(root);
	return 0;
}
