#include<stdio.h>
int main()
{
	char s[20];
	char *p,*start,*end,t;

	printf("enter the string\n");
	scanf("%[^\n]",s);
	p=s;
	while(*p)
	{
		while(*p==' ')
			p++;
		start=p;
		while(*p!=' ' && *p!='\0')
		{
			p++;
		}
		end=p-1;
		if((end+1-start)>4)
		{
			for(;start<end;start++,end--)
			{
				t=*start;
				*start=*end;
				*end=t;
			}
		}

	}
	printf("%s",s);

	return 0;
}
