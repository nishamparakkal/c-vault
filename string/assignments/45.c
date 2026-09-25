#include<string.h>
#include<stdio.h>
int main()
{
	char s1[30],s2[30],*p,*q;
	int c=0,l;
	printf("enter the main string and substring\n");
	scanf("%[^\n] %[^\n]",s1,s2);
	p=s1;
	for(l=0;s2[l];l++);
	while(*p)
	{
	if(q=strstr(p,s2))
	{
		c++;
		p=q+l;
	}
	else
		break;
	}
	printf("%d",c);
	return 0;
}
