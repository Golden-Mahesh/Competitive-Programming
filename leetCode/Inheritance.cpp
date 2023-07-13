// 5. Define a class A having multiple constructors. Define another class B derived from
// class A. Create derived class constructors and show use of constructor in this single
// inheritance.
#include<iostream>
using namespace std;
class A{
    private:
    int a;
    public:
    A(){
        cout<<"Class A Default constructor "<<endl;
    }
    A(int x){
        cout<<"Class A paramaterized constructor"<<endl;
        a=x;
    }
    A(A &x){
        cout<<"Class A copy constructor"<<endl;
        a=x.a;
    }
};
class B: public A{
    private:
    int b;
    public:
    B():A()
    {
        cout<<"Class B Default constructor"<<endl;
    }
    B(int x){
        cout<<"Class B paramaterized constructor"<<endl;
        b=x;
    }
    B(B &x)
    {
        cout<<"Class B copy Constructor"<<endl;
        b=x.b;
    }
};
int main(){
   B b1 ,b2(2);
   B b3=b2;

}
