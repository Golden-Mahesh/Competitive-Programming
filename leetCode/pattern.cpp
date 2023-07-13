#include<iostream>
using namespace std;
int main(){
    int i;
    int j;
    int k;
    for(i=1;i<=5;i++){
         k=1;
        for(j=1;j<=10;j++){
            if(j<=6-i){
                cout<<k<<" ";
                k++;
            }
            else if(j>=5+i){
                k--;
                cout<<k<<" ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
}