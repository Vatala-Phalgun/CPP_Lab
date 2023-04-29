//Takes two integer operands and one operator form the user, performs the operation and then
//prints the result.

#include<iostream>

using namespace std;

int num1,num2,sum,diff,product,quotient,remainder;
char choice;

int main()
{
    cout<<"Enter the First Integer- "<<endl;
    cin>>num1;

    cout<<"Enter the Second Integer- "<<endl;
    cin>>num2;

    cout<<"Enter the choice of operand- "<<endl;
    cin>>choice;

    switch(choice)
    {
        case '+': cout<<"The Operation selected is Addition."<<endl;
                  sum=num1+num2;
                  cout<<"The Summation is "<<sum<<endl;
        break;

        case '-': cout<<"The Operation selected is Subtraction."<<endl;
                   diff=num1-num2;
                  cout<<"The Difference is "<<diff<<endl;
        break;

        case '*': cout<<"The Operation selected is Multiplication."<<endl;
                   product=num1*num2;
                   cout<<"The Product is "<<product<<endl;
        break;

        case '/': cout<<"The Operation selected is Division."<<endl;
                   quotient=num1/num2;
                   cout<<"The Quotient is "<<quotient<<endl;
        break;

        case '%': cout<<"The Operation selected is Modular Division."<<endl;
                    remainder=num1%num2;
                   cout<<"The Remainder is "<<remainder<<endl;

        break;


    }

    return 0;

}
