// 2. Write a C++ program to read a text file and count the number of characters in it.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fin;
    char ch;
    int count=0;
    fin.open("C://",ios::in);
    if(!fin){
        cout<<"File is not open";
    }
    else{
        fin>>ch;
        // cout<<ch;         // file
    while(!fin.eof()){
        cout<<ch;
        fin>>ch;
        // cout<<ch;
    }
    //cout<<"\nTotal character is "<<count;
}
}
