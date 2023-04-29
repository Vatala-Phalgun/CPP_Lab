// Write a program to design a class representing complex numbers and having the functionality 
// of performing addition & multiplication of two complex numbers using operator overloading.

#include<iostream>
using namespace std;

class complex
{
    private:
    float real;
    float imag;
    public:
    complex()
    {
        real=imag=0.0;
    }
    void getdata()
    {
        cout<<"enter real value:"<<endl;
        cin>>real;
        cout<<"enter imag value:"<<endl;
        cin>>imag;
    }
    void outdata(string msg)
    {
        cout<<endl<<msg<<"("<<real;
        cout<<","<<imag<<")"<<endl;
    }

    friend complex operator*(complex c1,complex c2);
    friend complex operator+(complex c1,complex c2);
};

complex operator *(complex c1,complex c2)
{
    complex temp;
    temp.real=c1.real*c2.real-c1.imag*c2.imag;
    temp.imag=c1.real*c2.imag+c1.imag*c2.real;
    return temp;
}

complex operator +(complex c1,complex c2)
{
    complex temp;
    temp.real=c1.real+c2.real;
    temp.imag=c1.imag+c2.imag;
    return temp;
}
int main()
{
    complex c1,c2,c3,c4;
    cout<<"enter 1st complex number:"<<endl;
    c1.getdata();
    cout<<"enter 2nd complex number:"<<endl;
    c2.getdata();
    c3=c1*c2;
    c3.outdata("c3=c1*c2");
    c4=c1+c2;
    c4.outdata("c4=c1+c2");
    return 0;
}