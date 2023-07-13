#include<iostream>
using namespace std;
#include<cstring>
#include<cstdlib>
class myString{
  private:
  char *a=NULL;
  int size;
  public:
  myString(){
    cout<<"default called"<<endl;
    a=NULL;
    size=0;
  }
  myString(const myString &str){
    cout<<"copy constructor called"<<endl;
    cout<<"Caller obect size "<<size<<" passing argument size="<<str.size<<endl;
       size=strlen(str.a);
       a=(char*)malloc(size+1);
       strcpy(a,str.a);
  }
  myString(char * str){
     cout<<"String constructor called"<<endl;
     size=strlen(str);
     a=(char*)malloc(size+1);
     strcpy(a,str);
  }
  myString operator=(myString str){
     cout<<"Caller obect size "<<size<<" passing argument size="<<str.size<<endl;
    if(a!=NULL){
        free(a);
    }
    size=strlen(str.a);
    a=(char*)malloc(size+1);
    strcpy(a,str.a);
    free(str.a);
    return(*this);
  }
  void change(char *str){
    if(a!=NULL){
        free(a);
    }
    size=strlen(str);
    a=(char*)malloc(size+1);
    strcpy(a,str);
  }
  void display(){
    cout<<a<<endl;
  }
};
int main(){
    myString s1((char*)"Prateek");
    myString s2=s1;
    myString s3;
    myString s4((char*)"Mysirg");
    myString s5;
    s3=s1;
    s4=s1;
    s1=s1;
    s5=s4=s1;
    s1.change((char*)"Jain");
    s1.display();
    s2.display();
    s3.display();
    s4.display();
    s5.display();
}
