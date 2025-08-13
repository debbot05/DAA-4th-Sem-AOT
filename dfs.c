while(isEmpty()==0){
u=del();
printf("%c -> ", u+65);
for(int j=0;j<n;j++){
if(arr[u][j]==1){
if(visit[j]==0){
insert(j);
visit[j]=1;
}
}
}
}
printf("DONE\n");
}
int main(){
readGraph();
showGraph();
char v;
printf("\nEnter start vertex--> ");
scanf("%c",&v);
v=(int) v;
v-=65;
printf("BFS: ");
bfs(v);
return 0;
}
if(visit[j]==0){
insert(j);
visit[j]=1;
}
}
}
}
printf("DONE\n");
}
int main(){
readGraph();
showGraph();
char v;
printf("\nEnter start vertex--> ");
scanf("%c",&v);
v=(int) v;
v-=65;
printf("DFS: ");
dfs(v);
return 0;
}