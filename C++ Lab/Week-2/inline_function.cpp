//Write a program to demonstrate the Inline functions.
#include <iostream>
using namespace std;

inline int product(int x,int y)
{
    return x*y;
}

int main()
{
    int a,b,res;

    cout<<"Enter the two values"<<endl;
    cin>>a>>b;

    res=product(a,b);

    cout<<"The Product is "<<res<<endl;
    return 0;
}
