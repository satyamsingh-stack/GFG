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
void LOT(Node *root){
	queue<Node*> q;
	q.push(root);
	while(q.empty()==false){
		Node *temp=q.front();
		cout<<temp->key<<" ";
		q.pop();
		if(temp->left!=NULL)
			q.push(temp->left);
		if(temp->right!=NULL)
			q.push(temp->right);
	}
}
int main(){
	Node *root=new Node(20);
	root->left=new Node(10);
	root->right=new Node(30);
	root->left->left=new Node(5);
	root->left->right=new Node(15);
	root->right->left=new Node(25);
	root->right->right=new Node(35);
	LOT(root);
	return 0;
}
