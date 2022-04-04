#include<bits/stdc++.h>
using namespace std;
void addedge(vector<int> *adj,int u,int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}
void BFS(vector<int> *adj,int s,bool *visited){
	queue<int> q;
	q.push(s);
	visited[s]=true;
	while(q.empty()==false){
		int u=q.front();
		q.pop();
		for(int x:adj[u]){
			if(visited[x]==false){
				visited[x]=true;
				q.push(x);
			}
		}
	}
}
int bfsdis(vector<int> *adj,int v){
	bool visited[v+1];
	int count=0;
	for(int i=0;i<v;i++)
		visited[i]=false;
	for(int i=0;i<v;i++){
		if(visited[i]==false){
			BFS(adj,i,visited);
			count++;
		}
	}
	return count;
}
int main(){
	int v=9;
	vector<int> adj[v];
	addedge(adj,0,1);
	addedge(adj,0,2);
	addedge(adj,3,4);
	addedge(adj,5,6);
	addedge(adj,5,7);
	addedge(adj,7,8);
	cout<<bfsdis(adj,v);
	return 0;
}
