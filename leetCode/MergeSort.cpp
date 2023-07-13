#include<iostream>
using namespace std;
#include<conio.h>
void MergeSort(int*,int,int);
void Merge(int*,int ,int,int);
int main(){
    int arr[5]={5,2,3,1,45};
    int s=0;
    int r=4;
    MergeSort(arr,s,r);//calling mergeSort function to sort
    for(int i=0;i<=r;i++){
        cout<<arr[i]<<" ";
    }
}
void MergeSort(int arr[],int s,int r){
    int m;
if(s<r){
    m=(s+r)/2;
    MergeSort(arr, s, m);
    MergeSort(arr ,m+1,r );
    Merge(arr,s,m,r);
}
}
void Merge(int arr[],int s,int m,int r){
 int i=s;//starting index for left sub array
 int j=m+1;//starting index for right sub array
 int k=s;//starting index for temp array
 int temp[r-s+1];
 while(i<=m&&j<=r){
    if(arr[i]<arr[j]){
        temp[k]=arr[i];
        i++;
    }
    else{
        temp[k]=arr[j];
        j++;
    }
    k++;
 }
 while(i<=m){
    temp[k]=arr[i];
    i++;
 }
 while(j<=r){
    temp[k]=arr[j];
    j++;
 }
 for(int p=s ;p<=r;p++){
    arr[p]=temp[p];
 }

}