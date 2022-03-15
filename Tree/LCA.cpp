#include<iostream>
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
Node *lca(Node *root,int n1,int n2){
	if(root==NULL)
		return NULL;
	if(root->data==n1 || root->data==n2)
		return root;
	Node *lca1=lca(root->left,n1,n2);
	Node *lca2=lca(root->right,n1,n2);
	if(lca1!=NULL && lca2!=NULL)
		return root;
	if(lca1==NULL){
		return lca2;
	}
	else
		return lca1;
}
int main(){
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
	cout<<"Lowest Comman Ansestor is : ";
	int n1=40,n2=50;
	Node *ans=lca(root,n1,n2);
	cout<<ans->data;
	return 0;
}
