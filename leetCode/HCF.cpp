#include<iostream>
using namespace std;
  int hcf(int a,int b){
    // cout<<"X";
    if(a==0)
    return b;
    else if(b==0)
    return a;
    else if(a==b)
    return a;
   else{
    int mx=a>b?a:b;
    int mn=a>b?b:a;
    return hcf(mx-mn,mn);
   }
}
int main(){
    int a=14;
    int b=12;
    cout<<hcf(a,b);
}

