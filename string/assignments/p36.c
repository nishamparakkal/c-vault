// merge two strings to another

#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,l,c;
	char s1[30],s2[30],s3[30];
	char *p,*q,*k;

	printf("enter the string:\n");
	scanf("%[^\n]",s1);
	scanf(" %[^\n]",s2);
	
	p=s1;
	q=s2;
	k=s3;
	while(*q||*p)
	{
	*k=*p;
	k++;
	p++;
	*k=*q;
	k++;
	q++;
	}


	printf("%s",s3);
	return 0;
}
