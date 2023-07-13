#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int>m{{2,3}};
    for(auto num:m)
    cout<<num.first;
    auto it=m.find(3);
    cout<<((*it).first);
    vector<int>v{1,2,3,4};
    reverse(v.begin(),v.end());
    for(auto num:v)
    cout<<num;
}