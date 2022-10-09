#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE, *fp1, *fp2;
	int ch;
	fp1=fopen("d:/Song","r");
	fp2=fopen("d:/Study","w");
	while ((ch=fget(fp1))!=EOF)
	{
		fputc(ch,fp2);
	}
	Printf("Copied");
}
