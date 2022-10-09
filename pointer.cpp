#include <iostream>  
using namespace std;  
int main()
{ 
      int a=5;
      int*b=&a;
      cout<<"The address of a is :"<<b<<endl;
      cout<<"The Value of a is :"<<*b<<endl;

      return 0;
}