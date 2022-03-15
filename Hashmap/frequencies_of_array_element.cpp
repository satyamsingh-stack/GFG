#include<bits/stdc++.h>
using namespace std;
int main(){
	unordered_map<int,int> h;
	int arr[]={10,20,20,10,30,10};
	for(int i=0;i<6;i++)
		h[arr[i]]++;
	for(auto x:h)
		cout<<x.first<<" "<<x.second<<endl;
	return 0;
}
