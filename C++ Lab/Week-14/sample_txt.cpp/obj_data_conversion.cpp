#include<iostream>
using namespace std;
class stock2;
class stock1
{
int code, item;
float price;
public:
stock1(int a, int b, float c)
{
code=a;
item=b;
price=c;
}
void disp()
{
cout<<"code "<<code <<"\n";
cout<<"Items "<<item <<"\n";
cout<<"Price per item Rs . "<<price <<"\n";
}
int getcode()
{
return code;
}
int getitem()
{
return item;
}
int getprice()
{
return price;
}
operator float()
{
return ( item*price );
}
};
class stock2
{
int code;
float val;
public:
stock2()
{
code=0; val=0;
}
stock2(int x, float y)
{
code=x; val=y;
}
void disp()
{
cout<< "code "<<code <<"\n";
cout<< "Total Value Rs . " <<val <<"\n";
}
stock2(stock1 p)
{
code=p.getcode();
val=p.getitem() * p.getprice();
}
};
int main ( )
{
int a,b,c;
cin>>a>>b>>c;
stock1 i1(a,b,c);//101,10,125.0
stock2 i2;
float tot_val;
tot_val=i1;
i2=i1;
cout<<"Stock Details-stock1-type " <<"\n";
i1.disp();
cout<<"Stock value"<<"\n";
cout<< tot_val<<"\n";
cout<<"Stock Details-stock2-type "<<"\n";
i2.disp();
}