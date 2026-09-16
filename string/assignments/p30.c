//wap to sort the string in ascending order.
#include<stdio.h>
int main()
{
	int i,j,k,l,t,c=0;
	char s[30];
	char *p;

	printf("enter the string:\n");
	scanf("%[^\n]",s);

	for(l=0;s[l];l++);
	for(i=0;i<l-1;i++)
	{
		for(j=0;j<l-1-i;j++)
		{
			if(s[j]>s[j+1])
			{
				t=s[j];
				s[j]=s[j+1];
				s[j+1]=t;
			}
		}
	}
	printf("%s",s);

	return 0;
}
