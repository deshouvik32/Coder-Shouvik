#include<bits/stdc++.h>
using namespace std;

int fibbonanci (int n)
    {
        if (n<2)
        {return 1;}
        return fibbonanci (n-1)+fibbonanci (n-2);
    }

int main() 
{
    int a;
    cout<<"Enter the number "<<endl;
    cin>>a;
    cout<<"The term at the fibbonanci series position "<<a<<" is "<< fibbonanci(a)<<endl;

return 0;
}