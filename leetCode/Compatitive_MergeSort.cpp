/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include<iostream>
int * sortArray(int*,int,int*);
using namespace std;
void MergeSort(int *,int ,int );
void Merge(int *,int ,int ,int);
int main(){
    int arr[]={5,2,3,1,45};
    sortArray(arr,5,arr);
}
int* sortArray(int* nums, int numsSize, int* returnSize){
MergeSort(nums,0,numsSize-1);
    // int *p=(int *)malloc(sizeof(int)*(*returnSize));
    // for(int i=0;i<)
    for(int i=0;i<numsSize;i++){
        cout<<nums[i]<<" ";
    }
    return(nums);
}
void MergeSort(int *nums,int l,int r){
    int m;
    if(l<r){
        m=(l+r)/2;
        MergeSort(nums,l,m);
        MergeSort(nums,m+1,r);
        Merge(nums,l,m,r);
    }
}
void Merge(int *nums,int l,int m,int r){
    int i=l; //starting index of left sub array
    int j=m+1;//starting index of right sub array
    int k=l;//starting index of temp sub array;
    int temp[r-l+1];
    while(i<=m&&j<=r){
        if(nums[i]<nums[j]){
            temp[k]=nums[i];
            i++;
        }
        else{
            temp[k]=nums[j];
            j++;
        }
        k++;
    }
    while(i<=m){
        temp[k]=nums[i];
        k++;
        i++;
    }
    while(j<=m){
        temp[k]=nums[j];
        k++;
        j++;
    }
    for(int s=l;s<=r;s++){
        nums[s]=temp[s];
    }
}