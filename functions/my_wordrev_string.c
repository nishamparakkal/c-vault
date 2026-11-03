//reverse each word of a string

#include<stdio.h>
void my_strrev(char *);
void my_strrev1(char *,char *);
char * my_strchr(char *,char);
int main()
{
	char s[20],*p,*q;
	printf("enter the string\n");
	scanf("%[^\n]",s);
	p=s;

	while(q=my_strchr(p,' '))
	{
		my_strrev1(p,q-1);
		p=q+1;
	}
	my_strrev(p);

	printf("%s",s);
	return 0;
}

char * my_strchr(char *p,char ch)
{
	int i;
	for(i=0;p[i];i++)
	{
		if(p[i]==ch)
			return p+i;
	}
}

void my_strrev(char *p)
{
	char t,*q;
	q=p;
	while(*q)
		q++;
	q--;
	while(p<q)
	{
		t=*p;
		*p=*q;
		*q=t;
		p++;
		q--;
	}

}

void my_strrev1(char *p,char *q)
{
	char t;
	while(p<q)
	{

		t=*p;
		*p=*q;
		*q=t;
		p++;
		q--;
	}
}


