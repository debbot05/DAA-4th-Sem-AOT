#include<bits/stdc++.h>
using namespace std;

void bellmanFord(int graph[][3], int V, int E, int src){
	int dis[V];
	for(int i=0;i<V;i++){
		dis[i]=INT_MAX;
	}
	dis[src]=0;
	for(int i=0;i<V-1;i++){
		for(int j=0;j<E;j++){
			if(dis[graph[j][0]]!= INT_MAX && dis[graph[j][0]]+graph[j][2]<dis[graph[j][1]])
				dis[graph[j][1]]=dis[graph[j][0]]+graph[j][2];
		}
	}
	cout<<"Vertex Distance from Source"<<endl;
	for(int i=0;i<V;i++){
		cout<<"Vertex"<<i<<"\t"<<dis[i]<<endl;
	}
}

int main(){
	int V=6;
	int E=8;
	int graph[][3]={{0,1,1},
					{1,2,1},{1,5,5},
					{2,3,4},{2,4,1},
					{4,3,2},
					{5,0,1},{5,4,4}};
	bellmanFord(graph,V,E,0);
	return 0;
}
