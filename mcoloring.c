#include<stdio.h>
#include<stdlib.h>
#define MAX_NODES 100
int G[MAX_NODES][MAX_NODES];
int *x;
int n,m;

void nextValue(int k){
    int j;
    do{
        x[k]=(x[k]+1)%(m+1) ; // Next Highest color
        if(x[k]==0)      // Alll colors have been used
            return ;
        for(j=1;j<=n;j++) {
          // Check if this color is distinct from adjacent colors
          if((G[k][j]!=0) &&(x[k]==x[j]))
              // If (k,j) is an edge and if adjacent vertices have 
              // same color
              break;  

          }
	  if(j==n+1) // New color found
             return; 
    } while(1);//Otherwise try to find another color
}
void mcoloring(int k){
	int i;
    do{
       nextValue(k);   // Assign to x[k] a legal color
       if(x[k]==0)     // no new color is possible
	   		return;
       if(k==n)        // At most m colors have been used to color n vertices
       {
       	for(i=1;i<=n;i++){
       		printf("%d\t",x[i]);
		}
		printf("\n");
	   }
       else
          mcoloring(k+1);	
    }while(1);    
}


int main(void){
	
	// Input the number of vertices and the number of colors
	int i,j;
	
	printf("Enter the number of nodes:");
	scanf("%d",&n);
	
	printf("Enter the number of colors:");
	scanf("%d",&m);
	
	
	// Input the adjacency matrix
	printf("Enter the adjacency matrix:\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			scanf("%d",&G[i][j]);
			
		}
	}
	x=(int *)malloc(n*sizeof(int));
	
	// Initialize the colors to 0
	for(i=1;i<=n;i++){
		x[i]=0; //*(x+i)=0
	}
	
	mcoloring(1);	
	return 0;		
}