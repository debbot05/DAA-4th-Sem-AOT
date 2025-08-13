#include<iostream>
using namespace std;
double knapsack(int p[],int w[],int n,int m){
double total=0.0;
double x[n]={0.0};
    int U=m;
    for(i=0;i<n;i++){
        if(w[i]>U)break;
        x[i]=1.0;
        total=w[i];

    }
    if(i<n){
        x[i]=(double)U/w[i];
        total+=x[i]*p[i];
    }
    cout<<"Solution vector:";
    for(j=0;j<n;j++){
        cout<<x[j]<<" ";
    }
    cout<<endl;
    return total;
}
int main(){
    int profits[]={60,100,120};
    int weights[]={10,20,30};
    int n=sizeof(profits)/sizeof(profits[0]);
    int m=50;
    double total value=knapsack(profits,weights,n,m);
    cout<<"The maximum value collected is:"<<total value<<endl;
    double middle total=knapsack(profits,weights,n,m/2);
    cout<<"the maximum value collected at middle point is:"<<middle total<<endl;
    return 0;
}
    
}