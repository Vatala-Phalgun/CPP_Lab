//Programs to understand different function call mechanism.
// b. call by value
#include <iostream>

using namespace std;

void swap (int a,int b)
{
  int t;
  t=a;
  a=b;
  b=t;
  cout<<"After swapping:"<<endl;
  cout<<"a="<<a<<" b="<<b<<endl;
}

int main()
{
  int x,y;
  cout<<"Enter two values: "<<endl;
  cin>>x>>y;
  swap(x,y);
  return 1;
}