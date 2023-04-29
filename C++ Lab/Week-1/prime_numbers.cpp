//Generate all the prime numbers between 1 and n, where n is a value supplied by the user.

#include<iostream>
using namespace std;

int main()
{
    int i,j,isPrime,n;

    cout<<"Enter the value of n= ";
    cin>>n;
    
    for(i=2;i<=n;i++)
        {
        isPrime=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                 isPrime=1;
                 break;
             }
        }
        if(isPrime==0&&n!=1)
            cout<<i<<endl;
    }

return 0;
}
