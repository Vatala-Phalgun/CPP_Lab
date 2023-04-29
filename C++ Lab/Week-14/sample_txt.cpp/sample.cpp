#include <iostream>
#include <fstream>
using std::ofstream;
using std::ifstream;
using namespace std;
 
int main() 
{
    fstream file;
    file.open("sample.txt",ios::out);
ofstream outdata;
int count=0;
string str="Today C++ is the most widely used System Programming Language.\nMost of the state of the art software have been implemented using C++.\nEasy to learn\nStructured language\nIt produces efficient programs.\nIt can handle low-level activities.\nIt can be compiled on a variety of computers.";
string line;
outdata.open("sample.txt");
outdata<<str<<endl;
outdata.close();
cout<<"File content:\n";

while(!file.eof())
{
    file>>str;
    cout<<str;
}
file.close();
    //ifile.close();
   
   return 0 ;
}