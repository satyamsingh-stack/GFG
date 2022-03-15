// Time O(n)
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
int getsize(Node *root){
	if(root==NULL)
		return 0;
	return 1+getsize(root->left)+getsize(root->right);
}
int main(){
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	cout<<"Size of the tree is : "<<getsize(root)<<endl;
	return 0;
}
