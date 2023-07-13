#include<iostream>
using namespace std;
void selectionSort(int *a,int n){
    for(int i=1;i<n;i++){
        int j=i;
        while(a[j-1]>a[j]&&j>0){
            swap(a[j],a[j-1]);
            j--;
        }
    }
}
int main(){
  string s="mzarhsehs";
  s.erase(s.begin()+2);  // delete 100+2 pointing charcater  
  cout<<s;
}