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
int max_level=0;
void left_view(Node *root,int level){
	if(root==NULL)
		return ;
	if(max_level<level){
		cout<<root->data<<" ";
		max_level=level;
	}
	left_view(root->left,level+1);
	left_view(root->right,level+1);
}
int main(){
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->right->right=new Node(60);
	cout<<"Left View of The Tree is : ";
	left_view(root,1);
	return 0;
}
