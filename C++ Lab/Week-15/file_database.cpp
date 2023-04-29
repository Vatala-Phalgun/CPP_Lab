//Write a program to maintain the elementary database of employee using file concepts.
// You are using GCC
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    
    try
    {
        if(a==1)
        {
            throw a;
        }
        else if(a==2)
        {
            throw 'A';
        }
        else if(a==3)
        {
            throw 4.5;
        }
    }
    catch(int a)
    {
        cout<<"Integer exception caught.\n";
    }
    catch(char ch)
    {
        cout<<"Character exception caught.";
    }
    catch(double d)
    {
        cout<<"Double exception caught.\n";
    }
    return 0;
}