#include<bits/stdc++.h>
using namespace std;
void addedge(vector<int> *adj,int u,int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}
void BFS(vector<int> *adj,int s,bool visited[]){
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
void BFSdis(vector<int> *adj,int v){
	bool visited[v+1];
	for(int i=0;i<v;i++)
		visited[i]=false;
	for(int i=0;i<v;i++){
		if(visited[i]==false)
			BFS(adj,i,visited);
	}
}
int main(){
	int v=7;
	vector<int> adj[v];
	addedge(adj,0,1);
	addedge(adj,0,2);
	addedge(adj,1,3);
	addedge(adj,2,3);
	addedge(adj,4,5);
	addedge(adj,4,6);
	addedge(adj,5,6);
	BFSdis(adj,v);
	return 0;
}
