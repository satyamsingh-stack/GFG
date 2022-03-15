//Time O(n)
#include<iostream>
using namespace std;
struct Node{
	int key;
	Node *left;
	Node *right;
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
int main(){
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
	cout<<"Tree is : ";
	preorder(root);
	return 0;
}
