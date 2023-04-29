//Programs to understand storage specifiers
#include<iostream> 
#include<cstring> 
using namespace std; 
int main()
{ 
char name[30]; 
register int i; cout<<"Enter a string : "; 
cin>>name; 
cout<<"The revers string is : "<<endl; for(i=strlen(name)-1;i>=0;i--)
{ 
cout<<name[i]; 
} 
return 0; 
} 
