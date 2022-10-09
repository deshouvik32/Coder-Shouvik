#include <iostream>  
using namespace std;  

struct employee

{
  int eID;
  char favChar;
  float salary;
};

int main(){
struct employee shouvik;
shouvik.eID=32;
shouvik.favChar='C';
shouvik.salary=45000;
cout<<"The value is "<<shouvik.eID<<endl;
cout<<"The value is "<<shouvik.favChar<<endl;
cout<<"The value is "<<shouvik.salary<<endl;
return 0;
}

