//WAP in C to count duplicate char from string
#include<stdio.h>
int main()
{
	int i,j,k,l,t,c=1;
	char s[30];
	char *p;

	printf("enter the string:\n");
	scanf("%[^\n]",s);

	for(i=0;s[i];i++)
	{
		for(j=i+1,c=1;s[j];j++)
		{
			if(s[i]==s[j])
			{
				for(k=j;s[k];k++)
					s[k]=s[k+1];
				c++;
				j--;
			}
		}
		if(c!=1)
		printf("%c:%d\n",s[i],c);
	}

//	printf("%s",s);
	return 0;
}
