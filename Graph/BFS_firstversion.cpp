#include<bits/stdc++.h>
using namespace std;
void addedge(vector<int> *adj,int u,int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}
//void print(vector<int> *adj,int v){
//	for(int i=0;i<v;i++){
//		for(int x:adj[i])
//			cout<<x<<" ";
//		cout<<endl; 
//	}
//}
void BFS(vector<int> *adj,int v,int s){
	vector<bool> visited(v,false);
	queue<int> q;
	q.push(s);
	visited[s]=true;
	while(q.empty()==false){
		int u=q.front();
		q.pop();
		cout<<u<<" ";
		for(int x:adj[u]){
			if(visited[x]==false){
				visited[x]=true;
				q.push(x);
			}
		}
	}
}
int main(){
	int v=5;
	vector<int> adj[v];	
	addedge(adj,0,1);
	addedge(adj,0,2);
	addedge(adj,1,2);
	addedge(adj,1,3);
	addedge(adj,2,3);
	addedge(adj,2,4);
	addedge(adj,3,4);
//	print(adj,v);
	BFS(adj,v,0);
	return 0;
}
