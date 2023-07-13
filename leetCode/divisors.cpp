#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<algorithm>
int main(){
    
    vector<int> nums{73,13,20,6};
    vector<int> divisors{56,75,83,26,24,53,56,61};
       vector<int>score;
        int count;
        for(int i=0;i<divisors.size();i++){
            count=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]%divisors[i]==0){
                    count+=1;
                }
            }
            score.push_back(count);
        }
             int q;
             for(auto num:score){
                cout<<num<<" ";
             }
             cout<<endl;
        for(q=0;q<score.size()-1;q++){
            if(score[q]==score[q+1]){
               continue;
            }
            else
                break;
        }
        // cout<<q<<end;
        if(q==score.size()-1){
         auto p=min_element(divisors.begin(),divisors.end());
            cout<<(*p);
        }
        else{
            auto it=max_element(score.begin(),score.end());
            cout<<(divisors[it-score.begin()]);
        }
    
}