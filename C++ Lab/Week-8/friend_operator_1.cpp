//Write a Program to overload operators like * using friend function. The following
//overloaded operators should work for a class vector.

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
        cout<<"Enter Real Part:"<<endl;
        cin>>real;
        cout<<"Enter Imag Part"<<endl;
        cin>>imag;
    }

    void outdata(char *msg)
    {
        cout<<endl<<msg;
        cout<<"("<<real;
        cout<<","<<imag<<")"<<endl;
    }
    friend complex operator *(complex c1,complex c2);
};

complex operator *(complex c1,complex c2)
{
    complex temp;
    temp.real=c1.real*c2.real-c1.imag*c2.imag;
    temp.imag=c1.real*c2.imag+c1.imag*c2.real;
    return temp;
}

int main()
{
    complex c1,c2,c3;
    cout<<"Enter First Complex no."<<endl;
    c1.getdata();

    cout<<"Enter Second Complex no."<<endl;
    c2.getdata();

    c3=c1*c2;
    c3.outdata("c3=c1*c2:");

    return 0;
}
