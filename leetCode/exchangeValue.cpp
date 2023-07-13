// 6. Write a C++ program to demonstrate how a common friend function can
// be used to exchange the private values of two classes. (Use call by
// reference method).
#include<iostream>
using namespace std;
class Class2;
class Class1{
private:
int x,y;
public:
Class1(int x,int y){
    this->x=x;
    this->y=y;
}
void showData(){
    cout<<"X="<<x<<" Y="<<y<<endl;
}
friend void exchange(Class1&,Class2&);
};

class Class2{
    private:
    int a,b;
    public:
    Class2(int a,int b){
        this->a=a;
        this->b=b;
    }
    friend void exchange(Class1&,Class2&);
void showData(){
    cout<<"A="<<a<<" B="<<b<<endl;
}
};
void exchange(Class1 &a1,Class2 &b1){
    int temp;
    temp=a1.x;
    a1.x=b1.a;
    b1.a=temp;
    temp=a1.y;
    a1.y=b1.b;
    b1.b=temp;
}


int main(){
    Class1 a1(2,3);
    Class2 b1(5,23);
    exchange(a1,b1);
    a1.showData();
    b1.showData();
}

