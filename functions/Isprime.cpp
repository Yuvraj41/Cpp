#include<iostream>
using namespace std;

// 1-> Prime no
// 2-> Not prime no
bool Prime(int n)
{
  for(int i=2; i<n; i++)
  {
    if (n%i==0)
    {
        return 0;
    }
  }
  return 1;
}

int main()
{
    int n;
    cin>>n;
    if (Prime(n))
    {
        cout<<"Is a Prime Number"<<endl;
    }
    else
    {
        cout<<"Is not a Prime Number"<<endl;
    }
    return 0;
}