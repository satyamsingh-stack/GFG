/*Two Traversal, Aux Space: O(n)*/
#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *next;
	Node(int x){
		data=x;
		next=NULL;
	}
};
Node *reverse(Node *head){
	vector <int> arr;
	Node *curr=head;
	for(curr=head; curr!=NULL; curr=curr->next)
		arr.push_back(curr->data);
	for(curr=head; curr!=NULL; curr=curr->next){
		curr->data=arr.back();
		arr.pop_back();
	}
	return head;
}
void printlist(Node *head){
	Node *curr=head;
	while(curr!=NULL){
		cout<<curr->data<<" ";
		curr=curr->next;
	}
	cout<<endl;
}
int main(){
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=new Node(40);
	cout<<"Linkedlist is : ";
	printlist(head);
	head=reverse(head);
	cout<<"After Reversing Linkedlist : ";
	printlist(head);
	return 0;
}
