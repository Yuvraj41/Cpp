#include<iostream>
using namespace std;
 
void Fibo(int n)
{
    int num1=0,num2=1,num;
     
    cout<<"Fibonacci series"<<endl;
    
    for(int i=1;i<=n;i++)
    {
        if(i==1)
        {
            cout<<num1<<" ";
            continue;
        }

        if(i==2)
        {
            cout<<num2<<" ";
            continue;
        }
        num = num1+num2;
        num1=num2;
        num2=num;
        
        cout<<num<<" ";
    }
    cout<<endl; 
}

int main()
{
    int n;
    cout<<"Enter the number of terms:";
    cin>>n;
    Fibo(n);
    return 0;
}