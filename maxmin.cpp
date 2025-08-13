#include<iostream>
using namespace std;
void maxmin(int a[],int l,int r,int max,int min){
    if(l==r){
        max=min=a[0];
    }
    else if(r==l+1){
        if(a[l]>a[r]){
            max=a[l];
            min=a[r];
        }
        else{
            max=a[r];
            min=a[l];
        }
    }
    else{
        int m=l+(r-l)/2;
        int lmax,lmin,rmax,rmin;
        MaxMin(a,l,m,lmax,lmin);
        MaxMin(a,m+1,r,rmax,rmin);
        max=max(lmax,rmax);
        min=min(lmin,rmin);
    }
}
int main(){
    int n;
    cout<<"Enter elements of the array:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max,min;
    MaxMin(a,0,n-1,max,min);
    cout<<"Maximum value:"<<max<<endl;
    cout<<"Minimum value:"<<min<<endl;
    return 0;
}