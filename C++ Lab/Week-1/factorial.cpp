//To find the factorial of a given integer.
#include<iostream>

using namespace std;

int main()
{
    int n,i,fact=1;

    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    for(i=n;i>0;i--)
    {
        fact=fact*i;
    }
    cout<<"Factorial of Entered Number n is "<<fact<<endl;

    return 0;

}
