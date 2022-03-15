#include<iostream>
#include<unordered_set>
using namespace std;
int union_of_arr(int *arr1,int *arr2,int m,int n){
	unordered_set<int> s;
	for(int i=0;i<m;i++)
		s.insert(arr1[i]);
	for(int i=0;i<n;i++)
		s.insert(arr2[i]);
	return s.size();
}
int main(){
	int arr1[]={5,10,15,4};
	int arr2[]={10,15,4};
	cout<<union_of_arr(arr1,arr2,4,3);
	return 0;
}
