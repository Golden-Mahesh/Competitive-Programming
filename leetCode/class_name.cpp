#include <iostream>
using namespace std;
#include<typeinfo>
#include<fstream>
int main(){
    ofstream fout;
   std::cout<<typeid(fout).name();
    return 0;
}
