#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#include<string>

int main(){
    string s="Let's take LeetCode contest";
          vector<string>size;
        string temp="";
       for(int i=0;i<s.size();i++){
           if(s[i]==' '){
               size.push_back(temp);
               temp.clear();
               continue;
           }
           temp=temp+s[i];
       }
       size.push_back(temp);
       for(int i=0;i<size.size();i++)
       cout<<size[i];
       cout<<endl;
         for(int i=0;i<size.size();i++){
           reverse(size[i].begin(),size[i].end());
       }
       for(int i=0;i<size.size();i++)
       cout<<size[i];
 string ans="";
 cout<<endl;
      for(auto num:size)
      {
        ans=ans+num;
        ans=ans+" ";
      }
    cout<<endl;
    cout<<ans;
}