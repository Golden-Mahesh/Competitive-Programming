#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int>nums{-1,-53,93,-42,37,94,97,82,46,42,-99,56,-76,-66,-67,-13,10,66,85,-28};
          if(nums.size()==1)
        cout<<(1);
 auto it1=max_element(nums.begin(),nums.end());
 int i=it1-nums.begin();
 int n=nums.size();
 int Mb=i+1;
 int Ml=n-i;
 auto it2=min_element(nums.begin(),nums.end());
 int j=it2-nums.begin();
 int mb=j+1;
 int ml=n-j;
// if(i<n/2&&j<n/2){
//     cout<<(Mb>mb?Mb:mb);
// }
// if(i>n/2&&j>n/2){
//     cout<<(Ml>ml?Ml:ml);
// }
// cout<<(Mb+ml);
cout<<Mb<<endl<<ml;
      
}