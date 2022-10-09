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
    int x,y;
    cout<<"Enter the value of x ";
    cin>>x;
    cout<<"Enter the value of y ";
    cin>>y;

    cout<<"Before swapping x value is "<<x<<" y value is "<<y<<endl;
    swapReferenceVar (x,y);
    cout<<"After swapping x value is "<<x<<" y value is "<<y<<endl;

return 0;
}