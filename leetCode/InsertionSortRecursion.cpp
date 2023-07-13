#include<iostream>
using namespace std;
void InsertionSort(int *a,int n){
    if(n>1){
        InsertionSort(a,n-1);
       int j=n-1;
       while(j>0 && a[j-1]>a[j]){
             swap(a[j],a[j-1]);
             j--;
       }
    }
}
int main(){
    int a[]={12,3,2,5,23,5,3};
    InsertionSort(a,7);
    for(auto num : a)
    cout<<num<<" ";
}