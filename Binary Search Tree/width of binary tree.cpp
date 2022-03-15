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
int max_width(Node *root){
	if(root==NULL)
		return 0;
	int ans=0;
	queue<pair<Node *,int>> q;
	q.push({root,0});
	while(q.empty()==false){
		int size=q.size();
		int curMin=q.front().second;
		int leftMost, rightMost;
		for(int i=0;i<size;i++){
			int cur_id=q.front().second-curMin;
			Node *temp=q.front().first;
			q.pop();
			if(i==0)	leftMost=cur_id;
			if(i==size-1)	rightMost=cur_id;
			if(temp->left)
				q.push({temp->left,cur_id*2+1});
			if(temp->right)
				q.push({temp->right,cur_id*2+2});
		}
		ans=max(ans,rightMost-leftMost+1);
	}
	return ans;
}
int main(){
	Node *root=new Node(1);
	root->left=new Node(3);
	root->right=new Node(2);
	root->left->left=new Node(5);
	root->right->right=new Node(4);
	cout<<"Maximum Width is : "<<max_width(root);
	return 0;
}
