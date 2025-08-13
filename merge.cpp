#include<iostream>
using namespace std;
void merge(int a[],int low,int m,int r){
    int i=low;int j=m+1,k=r;B[100];
    while(i<=m && j<=r){
        if(a[i]<=a[j]) B[k++]=a[i++];
        else B[k++]=a[j++];
    while(i<=m) B[k++]=a[i++];
    while(j<=r) B[k++]=a[i++];
    for(i=low;j++;i<=r){
        a[i]=B[i];}
    }
    void mergeSort(int a[],int l,int r){
        if(l<r){
            int m=l+(r-l)/2;
            mergesort(a[],l,m);
            mergesort(a[],m+1,r);
            merge(a[],l,m,r;)
        }
    }
}
int main(){
    int n;
    cout<<"Enter array size:";
    cin>>n;
    int a[];
    cout<<"Enter elements:";
    for(int i=0;i<n;i++)
        cin>>a[i];
        mergesort(a,0,n-1);
        cout<<"After merge sort array is:";
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
    return 0;
}