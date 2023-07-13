#include<iostream>
#include<string>
using namespace std;
int main(){
    int sum=0;
    string s="ab";
    for(int i=0;i<s.size();i++){
         sum=sum+s[i];
    }
    int sum2=0;
    string s2="abc";
    for(int i=0;i<s2.size();i++){
       sum2=sum2+s2[i];
    }
    char a=abs(sum-sum2);
    cout<<sum<<endl;
    cout<<sum2<<endl;
    cout<<a;
}