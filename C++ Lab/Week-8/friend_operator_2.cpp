//Write a Program to overload operators like <<, >> using friend function. The following
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

    }
    complex (float InReal)
    {
        real=InReal;
        imag=0.0;
    }

    friend complex operator +(complex c1,c2)
    {
        complex c;
        c.real=c1.real+c2.real;
        c.imag=c1.imag+c2.imag;
        return c;
    }

    friend istream & operator >>(istream &In,complex &c);
    friend ostream & operator <<(ostream &out,complex &c);
};
istream & operator >>(istream In,complex &c)
{
    cout<<"Real Part?";
    In>>c.real;
    cout<<"Imag part?";
    In>>c.imag;
    return In;
}
ostream & operator <<(ostream &out,complex &c)
{
    out<<"c"<<c.real;
    out<<","<<c.imag<<")";
    return out;
}
int main()
{
    complex c1,c2,c3;
    cout<<"Enter complex1 c1..."<<endl;
    cin>>c1;

    cout<<"Enter complex c2..."<<endl;
    cin>>c2;

    c3=c1+c2;

    cout<<"Result of c3=c1+c2:";
    cout<<c3;

    c
}
}
