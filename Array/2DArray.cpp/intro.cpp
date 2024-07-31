#include<iostream>
using namespace std;

bool isPresent(int arr[3][4], int target,int row,int col)
{
   for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
          if(arr[i][j]==target)
          {
            return 1;
          }
          else
          {
            return 0;
          }
        }

    } 
}

int main()
{
    //create 2d array
    int arr[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }

    } 
    //print
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
          cout<<arr[i][j]<<" ";
        }
        cout<<endl;

    } 

    cout<<"Enter element to search"<<endl;
    int target;
    cin>>target;

    if(isPresent(arr[i][j],target,3,4))
    {
        cout<<"Element found";
    }
    else
    {
        cout<<"Element not found";
    }
    return 0;
}