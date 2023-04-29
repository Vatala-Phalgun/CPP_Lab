//Write a Program to design a class complex to represent complex numbers. The complex
//class should use an external function (use it as a friend function) to add two complex
//numbers. The function should return an object of type complex representing the sum of two
//complex numbers.

#include<iostream>
using namespace std;

class complexNumber
{
	float a;
	float b;
    friend class add;
    public:
        void getData()
        {
            cout<<"Enter number rational part = ";
            cin>>a;
            cout<<"Enter number irrational part = ";
            cin>>b;
        }
};

class add
{
    int sumOfR;
    int sumOfI;
    public:
        void addi(complexNumber &c1,complexNumber &c2)
        {
            sumOfR=c1.a+c2.a;
            sumOfI=c1.b+c2.b;
        }
        
        void print(complexNumber &c1,complexNumber &c2)
        {
            cout<<"Complex number = "<<sumOfR<<"+"<<sumOfI<<"i"<<endl;
        }
};

int main()
{
    complexNumber c1;
	complexNumber c2;
	add a;
	c1.getData();
	c2.getData();
	a.addi(c1,c2);
	a.print(c1,c2);

	return 0;
}