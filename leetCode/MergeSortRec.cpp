#include<iostream>
#include<conio.h>
using namespace std;
void mergeSort(int *a,int s,int e);
void merge(int *a,int s,int e){
    int s1=s;
  int mid=s+(e-s)/2;
  int s2=mid+1;
  int insert=0;
  int *temp=new int[e-s+1];
  while(s1<=mid&&s2<=e){
    if(a[s1]>a[s2]){
        temp[insert]=a[s2];
        s2++;
        insert++;
    }
    else{
        temp[insert]=a[s1];
        insert++;
        s1++;
    }
  }
  while(s1<=mid){
    temp[insert]=a[s1];
    s1++;
    insert++;
  }
  while(s2<=e){
    temp[insert]=a[s2];
    s2+=1;
    insert++;
  }
  insert=0;
  for(int i=s;i<=e;i++){
    a[i]=temp[insert];
    insert++;
  }
//   cout<<"Sorted Process are "<<endl;
//   for(int i=0;i<=e;i++){
//     cout<<a[i]<<" ";
//   }
//   getch();
  delete temp;
}
int main(){
    int a[]={3,19,18,0,17,23,1,3,2,12};
    mergeSort(a,0,9);
    for(auto num :a)
    cout<<num<<" ";
}
void mergeSort(int *a,int s,int e){
    int mid;
    if(s<e){
        mid=s+(e-s)/2;
        mergeSort(a,s,mid);
        mergeSort(a,mid+1,e);
        merge(a,s,e);
    }
    
}