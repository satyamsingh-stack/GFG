#include<bits/stdc++.h>
using namespace std;
struct Node{
	int key;
	Node *left,*right;
	int lcount;
	Node(int k){
		key=k;
		left=right=NULL;
		lcount=0;
	}
};
Node *insert(Node *root,int x){
	if(root==NULL)
		return new Node(x);
	if(x>root->key)
		root->right=insert(root->right,x);
	else{
		root->left=insert(root->left,x);
		root->lcount++;
	}
}
Node *kthsmallest(Node *root,int k){
	if(root==NULL)
		return NULL;
	int count=root->lcount+1;
	if(k==count)
		return root;
	if(count>k)
		return kthsmallest(root->left,k);
	return kthsmallest(root->right,k-count); 
}
int main(){
	Node *root=NULL;
	int arr[]={20,8,22,4,12,10,14};
	for(int i:arr)
		root=insert(root,i);
	int k=4;
	Node *res=kthsmallest(root,k);
	if(res==NULL)
		cout<<"There is no any Element";
	else
		cout<<"The "<<k<<" Smallest Element is : "<<res->key;
	return 0;
}
