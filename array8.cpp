#include <iostream>
using namespace std;
int main() {
   int arr[6] = {4, 1, 8, 2,6, 9};
   int len = sizeof(arr)/sizeof(arr[0]);
   cout << "The length of the array is: " << len;
   return 0;
}