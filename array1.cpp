#include <iostream>
using namespace std;

int main()
{
	// Array declaration by specifying size and initializing
	// elements
	int arr[6] = { 10, 20, 30, 40 };

	// Compiler creates an array of size 6, initializes first
	// 4 elements as specified by user and rest two elements as
	// 0. above is same as "int arr[] = {10, 20, 30, 40, 0, 0}"
	cout<< arr[1] <<" "<<arr[2] <<" "<<arr[3];  // output 20 30 40
	return 0;
}

// This code is contributed by sarajadhav12052009



