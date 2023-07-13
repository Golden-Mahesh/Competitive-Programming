#include<iostream>
using namespace std;
class ArrayADT{
int capacity;
int size;
int *p;
public:
ArrayADT(){
    capacity=0;
    size=0;
    p=NULL;
}
void CreateArray(int cap){
p=new int[cap];
capacity=cap;
}
void insert(int index,int data){
    if(index>=capacity)
    cout<<"Element can not insert";
    else if(index>size-1){
        size++;
        p[size]=data;
    }
    else {
        for(int i=size-1;i>=index;i--){
            p[i+1]=p[i];
        }
        size++;
    }
}
void append(int data){
    if(size==capacity)
    cout<<"Element can not insert";
else{
    p[size]=data;
    size++;
}
}
void deleteArray(int index)
{
    if(size==0)
        cout<<"Array is empty";
    else{
        for(int i=index;i<size-1;i++){
            p[index]=p[index+1];
        }
        size--;
    }
}
void edit(int index ,int data){
p[index]=data;
}
};

