#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
 void combinations(string digits,int i,vector<string>&ans,string output,string *mapping);
int main(){
   string digits="23";
      vector<string>ans;
      string output;
      string mapping[10]={"","","abc","def","ghi","jkl","mno"
      ,"pqrs","tuv","wxyz"};
      combinations(digits,0,ans,output,mapping);
   for(auto num:ans)
   cout<<num<<" ";
}
void combinations(string digits,int i,vector<string>&ans,string output,string *mapping){
   if(i>=digits.size()){
     ans.push_back(output);
    
   }
   else{
     string s="";
     s+=mapping[digits[i]-48];
     
     for(int j=0;j<s.size();j++){
         output.push_back(s[j]);
         combinations(digits,i+=1,ans,output,mapping);
         output.pop_back();
     }

   }

}