//wap to delete duplicate cha.
#include<stdio.h>
int main()
{
	int i,j,k,l,t,c=0;
	char s[30];
	char *p;

	printf("enter the string:\n");
	scanf("%[^\n]",s);

	for(i=0;s[i];i++)
	{
		for(j=i+1;s[j];j++)
		{
			if(s[i]==s[j])
			{
				for(k=j;s[k];k++)
					s[k]=s[k+1];	
			j--;
			}
		
		}
	}


	printf("%s",s);
	return 0;
}
