//Time Complixity is : O(m+n)
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
int count(Node *head){
	Node *curr=head;
	int c=0;
	while(curr!=NULL){
		c++;
		curr=curr->next;
	}
	return c;
}
int get_result(int d,Node *head1,Node *head2){
	Node *curr1=head1;
	Node *curr2=head2;
	for(int i=0;i<d;i++){
		if(curr1==NULL)
			return -1;
		curr1=curr1->next;
	}
	while(curr1!=NULL && curr2!=NULL){
		if(curr1==curr2)
			return curr1->data;
		curr1=curr1->next;
		curr2=curr2->next;
	}
}
int get_intersection(Node *head1,Node *head2){
	int c1,c2,d;
	c1=count(head1);
	c2=count(head2);
	if(c1>c2){
		d=c1-c2;
		return get_result(d,head1,head2);
	}
	else{
		d=c2-c1;
		return get_result(d,head2,head1);
	}
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
	Node *head1=new Node(10);
	Node *head2=new Node(20);
	head2->next=new Node(30);
	head2->next->next=new Node(40);
	Node *newnode=new Node(50);
	head1->next=newnode;
	head2->next->next->next=newnode;
	head1->next->next=NULL;
	cout<<"First Linkedlist is : ";
	printlist(head1);
	cout<<"Second Linkedlist is : ";
	printlist(head2);
	cout<<"Intersection of the Linkedlist is : "<<get_intersection(head1,head2)<<endl;
	return 0; 
}
/*ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *curr1=headA;
        ListNode *curr2=headB;
        while(curr1!=curr2){
            curr1=curr1->next;
            curr2=curr2->next;
            if(curr1==curr2)
                return curr1;
            else if(curr1==NULL)
                curr1=headB;
            else if(curr2==NULL)
                curr2=headA;
        }
        return curr1;
    }*/
