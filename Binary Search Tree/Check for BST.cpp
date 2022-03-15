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
int prevv=INT_MIN;
bool isbst(Node *root){
	if(root!=NULL){
		if(isbst(root->left)==false)
			return false;
		if(root->key<=prevv)
			return false;
		prevv=root->key;
		return isbst(root->right);
	}
	return true;
}
int main(){
	Node *root=new Node(10);
	root->left=new Node(8);   //true
	root->right=new Node(20);
	root->right->left=new Node(13);
	root->right->right=new Node(24);
//	Node *root=new Node(10);
//	root->left=new Node(12);    false
//	root->right=new Node(30);  
	cout<<isbst(root);
	return 0;
}
