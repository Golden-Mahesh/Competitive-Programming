#include<iostream>
#include<fstream>

using namespace std;

int main()
{

ifstream fin;
fin.open("test.txt", ios::in);

cout<<"The first location in the file : " <<fin.tellg() << "\n";
char ch;

cout<<"\nReading the content of file : \n";

//Read the file until EOF is reached
while(fin)
{
ch = fin.get(); 
cout<<ch;	
}
cout<<"After readig location of get pointer "<<fin.tellg()<<endl;
fin.clear();
cout<<"After Clear location of get pointer "<<fin.tellg()<<endl;
cout<<"\n\nReading the content of file once again : \n";


//Taking the get pointer at the zero byte location from the beginning of the file
fin.seekg(0, ios::beg);

//Reading the content of the file again
while(fin)
{
ch = fin.get(); 
cout<<ch;
}

return 0;
}
