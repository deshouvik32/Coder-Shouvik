#include<bits/stdc++.h>
using namespace std;

//Call by reference
void swapReferenceVar(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

int main() 
{
    int x=7, y=9;
    cout<<"Before swapping x value is "<<x<<" y value is "<<y<<endl;
    swapReferenceVar (x,y);
    cout<<"After swapping x value is "<<x<<" y value is "<<y<<endl;

return 0;
}