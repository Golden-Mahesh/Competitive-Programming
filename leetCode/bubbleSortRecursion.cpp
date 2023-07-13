#include<iostream>
using namespace std;
void bubbleSort(int *a,int n){
    if(n>1){
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1])
            swap(a[i],a[i+1]);
        }
        bubbleSort(a,n-1);
    }
}
int main(){
    int a[]={2,3,2,23,12,1,23};
    bubbleSort(a,7);
    for(auto num:a)
    cout<<num<<" ";
}