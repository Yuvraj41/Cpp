#include<iostream>
using namespace std;

int AP(int n)
{
    int result =((3*n)+7);

    return result;
}

int main()
{
  int n;
  cin>>n;
  int result= AP(n);
  cout<<result;
}