#include<stdio.h>
main()
{
	int i,n,r,fact=1,sum=0, limit;
	printf("Enter any number:");
	scanf("%d",&n);
	for (n>=1;i<=limit;n++)
	while (n>0)
	{
		r=n%10;
		fact =1;
		for(i=r;i>=1;i--)
		{
			fact=fact*i;
			
		}
		sum=sum+fact;
		n=n/10;
	}
	if (n==sum)
	printf("%d is a strong number",n);
}
