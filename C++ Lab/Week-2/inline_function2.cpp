#include<iostream>

using namespace std;

class operation
{
    int a,b,sum,sub,mul;
    float divi;

    public:
    void get();
    void suml();
    void sub1();
    void mul1();
    void divi1();
};

inline void operation :: get()
{
    cout<<"Enter first number"<<endl;
    cin>>a;

    cout<<"Enter second number"<<endl;
    cin>>b;
}

inline void operation :: sum1()
{
    sum=a+b;
    cout<<"Addition of two numbers= "<<sum<<endl;
}

inline void operation :: sub1()
{
    sub=a-b;
    cout<<"Subtraction of two numbers= "<<sub<<endl;
}

inline void operation :: mul1()
{
    mul=a*b;
    cout<<"Multiplication of two numbers= "<<mul<<endl;
}

inline void operation :: divi1()
{
    divi= a/float(b);
    cout<<"Division of two numbers- "<<divi<<endl;
}

int main()
{
    operation S;
    S.get();
    S.sum();
    S.sub();
    S.mul();
    S.divi();

    return 0;
}


