//#include<iostream>
//using namespace std;
//void MergeSort(int*,int,int);
//void Merge(int*,int ,int,int);
//int main(){
//    int arr[5]={4,2,1,12};
//    int s=0;
//    int r=3;
//    MergeSort(arr,s,r);//calling mergeSort function to sort
//for(int i=0;i<=r;i++){
//	cout<<arr[i]<<" ";
//}
//}
//void MergeSort(int arr[],int s,int r){
//    int m;
//if(s<r){
//    m=(s+r)/2;
//    MergeSort(arr, s, m);
//    MergeSort(arr ,m+1,r );
//    Merge(arr,s,m,r);
//}
//}
//void Merge(int arr[],int s,int m,int r){
// int i=s;//starting index for left sub array
// int j=m+1;//starting index for right sub array
// int k=r;//starting index for temp array
// int temp[r-s+1];
// while(i<=m&&j<=r){
//    if(arr[i]<arr[j]){
//        temp[k]=arr[i];
//        i++;
//    }
//    else{
//        temp[k]=arr[j];
//        j++;
//    }
//    k++;
// }
// while(i<=m){
//    temp[k]=arr[i];
//    i++;
// }
// while(j<=r){
//    temp[k]=arr[j];
//    j++;
// }
// for(s;s<=r;s++){
//    arr[s]=temp[s];
// }
//}
#include<iostream>
int main(){
	printf("%d ",4^1);
}
