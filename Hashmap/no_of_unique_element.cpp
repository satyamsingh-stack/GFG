#include<iostream>
#include<unordered_set>
using namespace std;
int noofunique(int *arr,int n){
	unordered_set <int> s;
	for(int i=0;i<n;i++)
		s.insert(arr[i]);
	return s.size();
}
int main(){
	int arr[]={5,10,15,5,4,5};
	cout<<noofunique(arr,6);
	return 0;
}
