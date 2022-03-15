#include<iostream>
#include<stack>
using namespace std;
struct twoarray{
	int *arr;
	int cap;
	int top1,top2;
	twoarray(int c){
		cap=c;
		arr=new int[cap];
		top1=-1;
		top2=cap;
	}
	void push1(int x){
		if(top1<top2-1){
			top1++;
			arr[top1]=x;
		}
		else{
			cout<<"Overflow";
			exit(1);
		}
	}
	void push2(int x){
		if(top1<top2-1){
			top2--;
			arr[top2]=x;
		}
		else{
			cout<<"Overflow";
			exit(1);
		}
	}
	int pop1(){
		if(top1>=0){
			int res=arr[top1];
			top1--;
			return res;
		}
		else{
			cout<<"Underflow";
			exit(1);
		}
	}
	int pop2(){
		if(top2>=0){
			int res=arr[top2];
			top2++;
			return res;
		}
		else{
			cout<<"Underflow";
			exit(1);
		}
	}
};
int main(){
	twoarray t(5);
	t.push1(1);
	t.push1(2);
	t.push1(3);
	t.push2(5);
	t.push2(4);
	cout<<"Popped Of Array 1 is : "<<t.pop1()<<endl;
	cout<<"Popped of Array 2 is : "<<t.pop2()<<endl;
	return 0;
}
