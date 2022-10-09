#include<stdio.h>
main()
{
	int c,r,sum=0,temp,n;
	printf("Enter a Number:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
	 r=n%10;
	 c=r*r*r;
	 sum=sum+c;
	 n=n/10;
	 }
	 n=temp; 
	 if (n==sum)
	 printf("%d is a amstrong number",n);
	 	 else
		  printf ("%d is not a amstrong number",n);
	
}
