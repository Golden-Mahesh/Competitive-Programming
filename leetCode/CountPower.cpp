#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool makeSort(pair<int,int>p1,pair<int,int>p2){
      if(p1.second<p2.second)
      return(true);
      else
      return false;
}
 int countPower(int x,int count){
        if(x==1){
            return count;
        }
        if(x%2==0){
            count++;
         return   countPower(x/2,count);
        }
        else{
            count++;
         return   countPower(3*x+1,count);
        }
    }
int main(){
    int lo=1;
    int hi=1000;
    vector<pair<int,int>>temp;
while(lo<=hi){
int pow=countPower(lo,0);
temp.push_back(make_pair(lo,pow));
lo+=1;
}
sort(temp.begin(),temp.end(),makeSort);
for(int i=0;i<1000;i++){
    cout<<temp[i].first<<"  "<<temp[i].second<<" = "<<i<<endl;
}
}
