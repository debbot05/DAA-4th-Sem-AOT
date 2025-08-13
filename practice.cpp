#include<iostream>
using namespace std;
struct Edge{
    int v1,v2,w;
};
int nov=6;
int noe=8;

Edge edges[]={{0,1,2},{0,2,1},{1,3,3},{1,4,4},{2,3,5},{2,5,10},{3,4,5},{4,5,2}};
int dsu[6];
int find(int x){
     if(dsu[x]==x)
        return x;
        return dsu[x]=find(dsu[x]);
}
void merge(int x,int y){
    x=find(x);
    y=find(y);
    if(x!=y)
        dsu[x]=y;
}
Edge tree[6];
void sort(){
    for(int i=0;i<noe;i++){
        int sorted=1;
        for(int j=0;j<noe-i-1;j++){
            if(edges[j].w>edges[j+1].w){
                Edge temp=edges[j];
                edges[j]=edges[j+1];
                edges[j+1]=temp;
                sorted=0;
            }
        }
        if(sorted)
            break;
    }
}