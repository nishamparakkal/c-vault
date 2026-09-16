#include<stdio.h>
int main()
{
	char s[20],*p,*start,*end,t;
	int digitfound,i,j,l;
	printf("enter the string\n");
	scanf("%[^\n]",s);
	p=s;
	while(*p)
	{
		digitfound=0;
		if(*p==' ')
			p++;
		start=p;
		while(*p!=' ' && *p!='\0')
		{
			if(*p>='0' && *p<='9')
				digitfound=1;
			p++;
		}
		end=p-1;
		if(digitfound)
		{
			l=end-start+1;
			for(i=0;i<l-1;i++)
			{
			for(j=0;j<l-1-i;j++)
			{
				if(start[j]>start[j+1])
				{
					t=start[j];
					start[j]=start[j+1];
					start[j+1]=t;
					
				}
			
			}
			}
		}


	}

	printf("%s",s);
	
	return 0;
}
