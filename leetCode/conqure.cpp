#include<iostream>
using namespace std;
int main(){
    int a[3]={11,3,1324};
    int b[3]={523,23,1};
    int merge[6];
    int k=0,i=0,j=0;
    while(i<3&&j<3){
        if(a[i]>b[j]){
            merge[k]=b[j];
            k++;
            j++;
        }
        else{
            merge[k]=a[i];
            k++;
            i++;
        }
    }
   if(i!=3){
    while(k<6){
        merge[k]=a[i];
        k++;
        i++;
    }
   }
   else{
    while(k<6){
        merge[k]=b[j];
        k++;
        j++;
    }
   }
   for(k=0;k<6;k++){
    cout<<merge[k]<<" ";
   }
}