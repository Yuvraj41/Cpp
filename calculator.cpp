//calculator using switch case statement//
#include<iostream>
using namespace std;
int main()
{
    //input
    int a,b;

    cout<<"Enter the value of a"<<endl;;
    cin>> a;

    cout<<"Enter the value of b"<<endl;
    cin>> b;

    //operation input
    char op;
    cout<<"Enter the operation:"<<endl;
    cin>> op;
    
    //algorithm
    switch(op)
    {
     case '+':
         cout<<(a+b)<<endl;
         break;
     case '-':
     cout<<(a-b)<<endl;
     break;

     case '/':
     cout<<(a/b)<<endl;
     break;

     case '*':
     cout<<(a*b)<<endl;
     break;

     case '%':
     cout<<(a%b)<<endl;
     break;

     default:
     cout<<"Defult"<<endl;     
    }
   return 0;
}