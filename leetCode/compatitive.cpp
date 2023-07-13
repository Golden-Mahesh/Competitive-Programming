#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int nums[]={1,2,2,1,1,0};
int i;
    int *ret=(int *)malloc(sizeof(int)*6);
    for(i=1;i<6;i++){
        if(nums[i]==nums[i-1]){
            nums[i-1]=nums[i-1]*2;
            nums[i]=0;
        }
    }
    int index=0;
for(int k=0;k<6;k++){
    if(nums[k]!=0){
        ret[index]=nums[k];
        index++;
    }
}
    while(index<6){
        ret[index]=0;
        index++;
    }
//    return ret;
for(int i=0;i<6;i++){
	cout<<ret[i]<<" ";
}
}
//int* applyOperations(int* nums, int numsSize, int* returnSize){
//int i;
//    int *ret=(int*)malloc(sizeof(int)*(*returnSize));
//    for(i=1;i<numsSize;i++){
//        if(nums[i]==nums[i-1]){
//            nums[i-1]=nums[i-1]*2;
//            nums[i]=0;
//        }
//    }
//    int index=0;
//for(int k=0;k<numsSize;k++){
//    if(nums[k]!=0){
//        ret[index]=nums[k];
//        index++;
//    }
//}
//    while(index<numsSize){
//        ret[index]=0;
//        index++;
//    }
//    return ret;
//}

