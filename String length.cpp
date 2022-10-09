#include<stdio.h>
#include<string.h>
main()
{
	char str[30];
	unsigned int len;
	printf("Enter a string:");
	gets (str);
	len=strlen (str);
	printf("Length of %s is: %d",str,len);
	return 0;
}
