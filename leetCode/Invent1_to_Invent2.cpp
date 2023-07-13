#include<iostream>
using namespace std;
class Invent1{
private:
int x,y;
public:
Invent1(){
    x=0;
    y=0;
}
Invent1(int x,int y){
    this->x=x;
    this->y=y;
}
operator float(){
    return(x+y);
}
int getX(){return x;};
int getY(){return y;};
};
class Invent2{
private:
int s;
public:
Invent2(){
    s=0;
}
Invent2(int s){
    this->s=s;
}
Invent2(Invent1 temp){
    s=temp.getX()+temp.getY();
}
void display(){
    cout<<s<<endl;
}
};
int main(){
    Invent1 s1(4,5);
    Invent2 d1;
    float tv;
    tv=s1;
    d1=s1;
    cout<<tv<<endl;
    d1.display();
    return(0);
}
