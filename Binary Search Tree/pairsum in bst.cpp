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
bool pairsum(Node *root,int s,unordered_set<int> &m){
	if(root==NULL)	return false;
	if(pairsum(root->left,s,m)==true)	return true;
	if(m.find(s-root->key)!=m.end())
		return true;
	else
		m.insert(root->key);
	return pairsum(root->right,s,m);
}
int main(){
//	Node *root=new Node(20);
//	root->left=new Node(8);               //false
//	root->right=new Node(40);
//	root->right->left=new Node(35);
	Node *root=new Node(10);
	root->left=new Node(5);
	root->right=new Node(20);             //true
	root->right->left=new Node(16);
	root->right->right=new Node(40);
	unordered_set<int> m;
	int ans=pairsum(root,25,m);
	if(ans)
		cout<<"True";
	else
		cout<<"False";
	return 0;
}
