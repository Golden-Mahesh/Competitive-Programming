#include<iostream>
#include<vector>
using namespace std;
int main(){
	//create vector object;
	vector<int>v1={1,2,3,5};
	vector<int>v2={2,3,5};
	vector<int>v3;
	for(auto it1=v1.begin();it!=v1.end();it++){
		v3.push_back(*it1);
	}
	for(auto it2=v2.begin();it2!=v2.end();it2++){
		v3.push_back(*it2);
	}
	std::sort(v3.begin(),v3.end());
	int max_size=v3.max_size();
	if(max_size%2){
		cout<<v3[max_size/2];
	}
	else
	cout<<(v3[max_size/2]+v3[(max_size/2)-1])/2;
}
