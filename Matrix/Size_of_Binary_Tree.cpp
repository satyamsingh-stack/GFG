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
int sizeof_tree(Node *root){
	if(root==NULL)
		return 0;
	return 1+sizeof_tree(root->left)+sizeof_tree(root->right);
}
int main(){
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
	cout<<"Size of the Tree is : "<<sizeof_tree(root)<<endl;
	return 0;
}
