#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums{18,7,9,78,37,2,17,88,78,20,7,20,79,10,44,60,53,16,88,37,50,72,14,5,42,14,23,54,88,0,46,25,57,1,60,77,6,51,73,93,66,34,82,90,14,21,21,93,13,0,60,89,64,10,38,91,26,42,16,68,47,21,62,25,63,36,76,85,93,88,83};
    sort(nums.begin(),nums.end());
    for(auto num:nums)
    cout<<num<<" ";
    cout<<endl<<endl;
    vector<int>::iterator it;
    map<int,int>m;
    m.find(2);
    vector<int>ans;
    int pair_=0;
    int rem=0;
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i]==nums[i+1]){
            pair_++;
            i+=1;
        }
        else{
            rem++;
        }
    }
    cout<<pair_<<" "<<rem;
}