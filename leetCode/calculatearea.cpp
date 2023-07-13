// 9. Write a C++ program to calculate the area of triangle, rectangle and circle using
// constructor overloading. The program should be menu driven.
#include<iostream>
#include<math.h>
using namespace std;
class Area{
private:
float area;
public:
Area(float r){
    area=r*r;
}
Area(float l ,float b){
    area=l*b;
}
Area(float a, float b, float c)
{
float s;
s=(a+b+c)/2;
area=s*(s-a)*(s-b)*(s-c);
area=pow(area,0.5);
}
void display(){
    cout<<area<<endl;
}
};
int main(){
    char choice;
    float x,y,z;
    do{
        cout<<"1 . calculate circle area "<<endl;
        cout<<"2 . calculate rectange area"<<endl;
        cout<<"3 . calculate triangle area"<<endl;
        cout<<"4 . exit(0)";
        cin>>choice;
        printf("%d \n",choice);
        switch (choice)
        {
        case 1: {
		          cout<<"Enter radious ";
               cin>>x;
               Area a1(x);
               a1.display();
            break;
        }
        case 2: {
		       cout<<"Enter length and width ";
              cin>>x>>y;
              Area a2(x,y);
              a2.display();
              break;
			  }
        case 3: { 
		          cout<<"Enter length , width and hight ";
               cin>>x>>y>>z;
               Area a2(x,y,z);
               a2.display();
               break;
           }
        case 4:
        exit(0);
        default:
        cout<<"Invalid choice";
        }
    }while(choice!=4);
    return(0);    
}
