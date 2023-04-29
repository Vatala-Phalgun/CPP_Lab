#include<iostream>
#include<sstream>

using namespace std;
int main()
{
    int k;
    cin>>k;

    stringstream ss;
    ss<<k;
    
    string s; 
    cin>>s;
    ss>>s;
    
    string num;
    ss>>num;
    
    int i;
    ss<<i;
    cout<<"An integer value is: "<<k<<"\n";
    cout<<"String representation of an integer value is: "<<s<<endl;
    cout<<"The value of the string is: "<<s<<"\n";
    cout<<"Integer value the string is: "<<i;
    return 1;
}