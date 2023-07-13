#include<iostream>
using namespace std;
class Coordinate{
 private:
 int  x,y,z;
 public:
Coordinate(){
  cout<<"Non parametrized constructor called"<<endl;
}
Coordinate(int x,int y,int z){
  cout<<"Parameterized constructor called"<<endl;
  this->x=x;
  this->y=y;
  this->z=z;
}
Coordinate(Coordinate &temp){
  cout<<"copy constructor called"<<endl;
  x=temp.x;
  y=temp.y;
  z=temp.z;
}
void DisplayCoordiante(){
    cout<<"x= "<<x<<"  y="<<y<<"  z="<<z<<endl;
}
Coordinate operator,(Coordinate temp){
  cout<<"  , operator called "<<endl;
  x=temp.x;
  y=temp.y;
  z=temp.z;
return(temp);
}
};
int main(){
    Coordinate c1(2,3,4),c2(4,5,6),c3(1,2,3),c4;
    c4=(c1,c2,c3);//c1.operator,(c2);
    c3.DisplayCoordiante();
}
