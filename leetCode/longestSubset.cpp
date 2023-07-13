#include<bits/stdc++.h>
using namespace std;
 bool checkdivisibility(vector<int>output,int n);
void subsets(vector<int>nums,vector<int>output,int i,vector<vector<int>>&ans);
int main(){
    vector<int> nums={3,4,16,8};
        vector<vector<int>>ans;
        vector<int>output;
        subsets(nums,output,0,ans);
        for(auto num:ans){
            for(int i=0;i<num.size();i++)
            cout<<num[i]<<" ";
            cout<<endl;
        }
        int mx=0;
        vector<int>temp;
        for(auto num:ans){
          if(num.size()>mx)
          temp=num;
        }
        cout<<endl<<"Ans is "<<endl;
        for(auto num:temp)
        cout<<num<<" ";
}
bool checkdivisibility(vector<int>output,int n){
    int i;
  for(i=0;i<output.size();i++){
      if(output[i]%n==0||n%output[i]==0)
      continue;
      else
      break;
  }
  if(i==output.size())
  return true;
  return false;
}
void subsets(vector<int>nums,vector<int>output,int i,vector<vector<int>>&ans){
        if(i==nums.size()){
        sort(output.begin(),output.end());
        int j;
     for(j=0;j<output.size();j++){
         if(checkdivisibility(output,output[j]))
         continue;
         else
         break;
     }
     if(j==output.size())
     ans.push_back(output);
     }
     else
     {
     subsets(nums,output,i+1,ans);
     int element=nums[i];
     output.push_back(element);
     subsets(nums,output,i+1,ans);
    }
    }