#include<iostream>
using namespace std;
#include<conio.h>
template<typename x>
x find_max(x  a ,x b){
	if(a>b)
	return(a);
	else
	return(b);
	}
int main(){
	float x ,y;
	cout<<"Enter two number";
	cin>>x>>y;
	int sum=find_max<float>(x,y);
	cout<<sum;
	return(0);
}
