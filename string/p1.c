#include<stdio.h>
int main()
{
	int found=0;
	char s[30];
	char *p,*start,*end,t;

	printf("Enter the string\n");
	scanf("%[^\n]",s);
	p=s;
	while(*p)
	{
		while(*p==' ')
			p++;
		start=p;
		while(*p!=' ' && *p!='\0')
		{
			if(*p=='p' || *p=='P')
				found=1;
			p++;
		}
		end=p-1;
		if(found)
		{
			for(;start<end;start++,end--)
			{
				t=*start;
				*start=*end;
				*end=t;
			}
		}
		found=0;
	}
	printf("%s",s);
	return 0;
}
