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
bool sum_ch(Node *root){
	int sum=0;
	if(root==NULL)
		return true;
	if(root->left==NULL && root->right==NULL)
		return true;
	if(root->left!=NULL)	sum=sum+root->left->key;
	if(root->right!=NULL)	sum=sum+root->right->key;
	return (root->key==sum && sum_ch(root->left) && sum_ch(root->right));
}
int main(){
	Node *root=new Node(20);
	root->left=new Node(8);
	root->right=new Node(12);
	root->right->left=new Node(3);
	root->right->right=new Node(9);
	int ans=sum_ch(root);
	if(ans)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
