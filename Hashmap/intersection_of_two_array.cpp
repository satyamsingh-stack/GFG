#include<bits/stdc++.h>
using namespace std;
int main(){
	unordered_set<int> s_a;
	unordered_set<int> s_b;
	int arr1[]={10,20,10,30,20};
	int arr2[]={20,10,10,40};
	for(int i=0;i<5;i++)
		s_a.insert(arr1[i]);
	for(int i=0;i<4;i++)
		s_b.insert(arr2[i]);
	int count=0;
	for(auto x: s_a){
		for(auto y:s_b){
			if(x==y)
				count++;
		}
	}
	cout<<count;
	return 0;
}
