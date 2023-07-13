#include<iostream>
#include<string>
using namespace std;
bool palindrome(string s,int i,int j){
if(i>j){
    return(true);
}
else{
    if(s[i]==s[j]){
             i++;
             j--;
         return palindrome(s,i,j);
    }
      return false;
}
}
int main(){
    string s="BookkooB";
    cout<<palindrome(s,0,7);
}