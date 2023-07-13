#include<iostream>
using namespace std; // why we use std namespace can you give ans
void bubbleSort(int *arr,int j){
    int i;
    int flag;
    for(int round=0;round<j-1;round++){
          i=0;
          flag=1;
          while(i<j-1-round){
            if(arr[i]>arr[i+1]){
                flag=0;
              swap(arr[i],arr[i+1]);
            }
            i+=1;
          }
          if(flag) 
          break;
    }
}
int main(){
    int a[]={2,3,1,23,5,323,32};
    bubbleSort(a,7);
    for(auto num:a)
    cout<<num<<" ";
}