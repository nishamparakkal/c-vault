// reverse word by word in a string

#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,l,c=1;
	char s[30],t;
	char *p,*q,*k;

	printf("enter the string:\n");
	scanf("%[^\n]",s);
	q=s;
	while(p=strchr(q,' '))
	{
		k=p-1;
		for(;q<k;q++,k--)
		{
		t=*k;
		*k=*q;
		*q=t;
		}
		q=p+1;
	}
	 
	if(p=strchr(q,'\0'))
	{
		k=p-1;
		for(;q<k;q++,k--)
		{
		t=*k;
		*k=*q;
		*q=t;
		}
	}



	printf("%s",s);
	return 0;
}
