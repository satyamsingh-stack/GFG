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
int dia=0;
int height(Node *root){
	if(root==NULL)
		return 0;
	int lh=height(root->left);
	int rh=height(root->right);
	dia=max(dia,lh+rh+1);
	return max(lh,rh)+1;
}
int main(){
	Node *root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	height(root);
	cout<<"Diameter is : "<<dia;
	return 0;
}
