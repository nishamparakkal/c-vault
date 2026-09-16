#include<stdio.h>
#include<string.h>
int main()
{
	char s[30],*p,*start,*end,*start1,*start2;
	char largest=0,largest_len=0;
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
		largest_len=end-start+1;
		if(largest_len>largest)
		{
			largest=largest_len;
			start1=start;
			start2=p+1;
		}
	}

	strcpy(start1,start2);

	printf("%s",s);

	return 0;
}
