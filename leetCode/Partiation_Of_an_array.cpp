#include<iostream>
using namespace std;
#include<unordered_map>
#include<map>
#include<vector>
int main(){
    vector<int>nums{1,10,10,10,3};
    map<int,int>m;
    for(int i=0;i<nums.size();i++){
        m[nums[i]]=m[nums[i]]+1;
    }
    for(auto num: m)
    cout<<num.second;
}