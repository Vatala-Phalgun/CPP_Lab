//Write a Program to swap private data members of classes Named as class_1, class_2 using
//friend function.

#include<iostream>
using namespace std;
class class_2;
class class_1
{
    int value1;
    public:
        void indata(int a)
         {
            value1=a;
        }
        void display()
        {
            cout<<value1<<endl;
        }

friend void exchange(class_1 &,class_2 &);
};

class class_2
{
    int value2;
    public:
        void indata(int a)
        {
            value2=a;
        }
        void display()
        {
            cout<<value2<<endl;
        }
friend void exchange(class_1 &,class_2 &);
};
  void exchange(class_1 &x,class_2 &y)
    {
        int t;
        t=x.value1;
        x.value1=y.value2;
        y.value2=t;
    }

int main()
{
    class_1 c1;
    class_2 c2;
    c1.indata(100);
    c2.indata(200);
    
    cout<<"Values before exchange:"<<endl;
    c1.display();
    c2.display();
    exchange(c1,c2);

    cout<<"Values after exchange: "<<endl;
    c1.display();
    c2.display();
    return 0;
}

