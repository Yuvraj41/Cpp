#include<iostream>
using namespace std;

char toLowerCase(char ch)
{
  if(ch>='a' && ch<='z') 
  return ch;
  else{
    char temp = ch - 'A'+'a';
    return temp;
  }
}


bool checkPalindrome(char a[],int n)
{
    int s=0;
    int e = n-1;

    while(s<=e)
    {
        if(toLowerCase(a[s])!=toLowerCase(a[e]))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}
int reverse(char name[], int n)
{
  int start = 0;
    int end = n-1;

    while(start<end)
    {
        swap(name[start++],name[end--]);
    }

    // Swap characters from the start and end until the middle is reached
   
}

int getlength(char name[])
{
    int count = 0;
    for(int i=0;name[i]!='\0';i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];

    cout<<"Enter a name:"<<endl;
    cin>>name;
    
    int len = getlength(name);
    cout<<"Length"<<len<<endl;

    reverse(name,len);
    cout<<"Your name is";
    cout<<name<<endl;

    cout<<"Palindrome or Not"<<checkPalindrome(name,len)<<endl;
    cout<<"CHARACTER is"<<toLowerCase('b')<<endl;   
    cout<<"CHARACTER is"<<toLowerCase('C')<<endl;
    return 0;
}