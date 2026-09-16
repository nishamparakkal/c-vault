// find largest workd in string

#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,l1,l2,c,t,largest;
	char s[30];
	char *p,*q,*k;
	int max=0,maxst=0,len=0,st=0;
	printf("enter the string:\n");
	scanf("%[^\n]",s);

	for(i=0;s[i];i++)
	{
		if(s[i]!=' ' && s[i]!='\0')
		{
			len++;
		}
		else
		{
			if(len>max)
			{
				max=len;
				maxst=st;
			}
			len=0;
			st=i+1;
		}
	}

	for(i=maxst;i<max+maxst;i++)
		printf("%c",s[i]);


	return 0;
}
