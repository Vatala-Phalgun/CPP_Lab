//Write a Program to design a class having static member function Named showcount() which
//has the property of displaying the number of objects created of the class

#include<iostream>

using namespace std;

class test
{
    int objno;
    static int objcnt;
    public:
        test()
        {
            objno=++objcnt;
        }
        ~test()
        {
            --objcnt;
        }
        void printobjnumber(void)
        {
            cout<<"Object number:"<<objno<<endl;
        }
        static void printobjcount(void)
        {
            cout<<"Object Count:"<<objcnt<<endl;
        }

};

int test::objcnt;
int main()

{
    test t1,t2;
    test::printobjcount();
    test t3;
    test::printobjcount();
    t1.printobjnumber();
    t2.printobjnumber();
    t3.printobjnumber();

    return 1;
}