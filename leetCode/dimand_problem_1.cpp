#include<iostream>
using namespace std;
class a{
 int x;
};
class b : public a{
 int y;  //   16
};
class c : public a{
 int z;  // 16
};
class d : public b, public c{
 int p;// 
};
int main(){
  d d1;
  cout<<sizeof(d);
  return(0);
}
