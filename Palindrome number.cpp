#include<stdio.h>
main()
{
	int i,n,r,sum=0,temp;
	printf("Enter a number:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	n=temp;
	if(n==sum)
	printf("%d is a palindrome number",sum);
	else
	printf ("%d is not a palindrome number",sum);
	return 0;
}
