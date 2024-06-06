#include<iostream>
using namespace std;
void count(int n)
{
    //function body
    for(int i=1;i<=n;i++)
    {
        cout<< i <<" ";
    }
    cout<< endl;
}
   int main()
   {
    int n;
    cin>>n;

    //function call
    count(n);
    return 0;
   }