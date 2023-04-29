//Programs to understand different function call mechanism.
 //a.call by reference
#include<iostream>

using namespace std;

void swap(int &x, int &y)
{
    int t;
    t=x;
    x=y;
    y=t;
}

int main()
{
    int a,b;
    cout<<"Enter Two Values"<<endl;
    cin>>a>>b;

    cout<<"Before Swapping"<<endl;
    cout<<"a="<<a<<" b="<<b<<endl;

    swap(a,b);

    cout<<"After Swapping"<<endl;
    cout<<"a="<<a<<" b="<<b<<endl;

    return 1;
}
