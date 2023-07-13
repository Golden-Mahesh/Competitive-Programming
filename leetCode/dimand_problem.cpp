#include<iostream>
using namespace std;
class a{
 int x;
};
class b :virtual public a{
 int y;
};
class c :virtual public a{
 int z;
};
class d : public b, public c{
 int p;
};
int main(){
  d d1;
  b b1;
  int *p;
  cout<<sizeof(p)<<endl;
  cout<<sizeof(b)<<endl;
  cout<<sizeof(d);
  return(0);
}