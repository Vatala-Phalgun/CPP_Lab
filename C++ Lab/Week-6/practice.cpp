#include<iostream>
#include<math.h>
using namespace std;

class quad
{
    public:
    int a,b,c;
    float root_1,root_2;
    float d;
    quad()
    {
        cout<<"Enter the Coefficient of first term: "<<endl;
        cin>>a;

        cout<<"Enter the Coefficient of second term: "<<endl;
        cin>>b;

        cout<<"Enter the Constant: "<<endl;
        cin>>c;
        
        d=(pow(b,2)-4*a*c);

        root_1=(-b+sqrt(d))/2*a;
        root_2=(-b-sqrt(d))/2*a;

         if(d==0)
        {
           cout<<"The Roots are Real and Equal"<<endl;
        }
        else if(d>0)
        {
            cout<<"The Roots are Real and Distinct"<<endl;
            
        }
        else
        {
            cout<<"The Roots are Imaginary."<<endl;
        }
    }
    void display()
    {
        cout<<"The Roots of the Given Quadratic Equation are as follows: "<<endl;
        cout<<"Root 1 ="<<root_1<<endl<<"Root 2="<<root_2<<endl;
    }
};

int main()
{
    quad equation1;
    equation1.display();

    return 0;
