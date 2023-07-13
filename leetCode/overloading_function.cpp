// 2. Define a class Rectangle and overload area function for different types of data type.
#include<iostream>
using namespace std;
class Rectangle{
private:
float Area;
public:
void area(int l,int b){
    cout<<"Area 1 called"<<endl;
    Area=l*b;
}
void area(float l,float b){
    cout<<"Area 2 called "<<endl;
    Area=l*b;
}
void area(int l,float b){
    cout<<"Area 3 called"<<endl;
    Area=l*b;
}
void area(float l,int b){
    cout<<"Area 5 called"<<endl;
    Area=l*b;                             //  int int
}                                         //   float float
void display(){                           //  int float
    cout<<Area<<endl;                     //  float int
}                                         //   int char
};                                         //   char int
int main(){                                //  char char
    Rectangle r1,r2,r3,r4;
     r1.area(2,3);
     r1.display();
     r2.area(2.0f,2.0f);  // double type promotion float double
}
