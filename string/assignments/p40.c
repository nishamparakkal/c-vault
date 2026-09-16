#include<stdio.h>
int main()
{
char s[20];
char *p=s,*start,*end;
int digitfound=0,t,i,j;
printf("enter the string\n");
scanf("%[^\n]",s);
while(*p)
{
while(*p==' ')
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
for(;start<end;start++,end--)
{
t=*start;
*start=*end;
*end=t;
}
}
digitfound=0;
}
printf("%s\n",s);


return 0;
}
