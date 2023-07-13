#include<iostream>
#include<string>
#include<map>
#include<vector>
using namespace std;
#include<algorithm>
bool waytosort(pair<char,int>,pair<char,int>);
int main(){
   string s="tree";
   map<char,int>m;
   for(int i=0;i<s.length();i++){
    m[s[i]]=m[s[i]]+1;
   }
   vector<pair<char,int>>v;
   pair<char,int>p;
   for(auto num:m){
      v.push_back(make_pair(num.first,num.second));
   }
   sort(v.begin(),v.end(),waytosort);
   string ans="";
   for(auto num:v){
      int i=1;
      while(i<=num.second){
ans=ans+num.first;
i++;
      }
   }
cout<<ans;
}
bool waytosort(pair<char,int>p1,pair<char,int>p2){
   return(p1.second>p2.second);
}