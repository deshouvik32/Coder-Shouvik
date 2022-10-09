#include<bits/stdc++.h>
using namespace std;

int factorial (int n)
    {
        if (n<=1)
        {return 1;}
    return n * factorial(n-1);
    }


int main() 
{
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    cout<<"fatorial of "<<a<< " is "<< factorial (a) <<endl;
return 0;
}