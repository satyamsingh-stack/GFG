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
int balanced(Node *root){
	if(root==NULL)
		return 0;
	int lh=balanced(root->left);
	if(lh==-1)	return -1;
	int rh=balanced(root->right);
	if(rh==-1)	return -1;
	if(abs(lh-rh)>1)	return -1;
	else
		return max(lh,rh)+1;
}
int main(){
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
	
	cout<<"Check For Balanced : ";
	int ans=balanced(root);
	if(ans>0)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
