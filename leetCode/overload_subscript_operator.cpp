#include<iostream>
using namespace std;
class Array{
 private:
 int a[100]={0};
 const int size=100;
 public:
 Array(){
 
 }

void setArray(int index,int value){
      if(index>100){
        cout<<"Array index out of bound Exception"<<endl;
        exit(0);
    }
      a[index]=value;
}
void display(int index){
      if(index>=100){
        cout<<"Array index out of bound Exception"<<endl;
        exit(0);
    }
    cout<<a[index]<<endl;
}
int operator[](int index){
    if(index>=100){
        cout<<"Array index out of bound Exception"<<endl;
        exit(0);
    }
   return(a[index]); 
}
};
int main(){
    Array a;
    a.setArray(2,10);
    a.display(2);
    cout<<a[2];
}
