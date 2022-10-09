#include<stdio.h>
main()
{
	int i,n,count=0;
	printf("Enter any number:");
	scanf("%d",&n);
	for
		(i=1;i<=n;i++)
		{
			if(n%i==0)
			{ count++;
			}
		}
			if 
			(count==2)
		
		printf ("%d is a Prime number",n);
		else printf("%d is not a prime number",n);
		return 0;
	}
