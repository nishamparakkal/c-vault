// WAP to sort array of 5 string virtually
#include<stdio.h>
#include<string.h>
int main()
{
char s[5][10],*t;
char *p[5];
int ele,i,j;
ele=sizeof(s)/sizeof(s[0]);
for(i=0;i<ele;i++)
	p[i]=s[i];
printf("enter 5 strings:\n");
for(i=0;i<ele;i++)
	scanf("%s",s[i]);
printf("before:\n");
for(i=0;i<ele;i++)
	printf("%s ",p[i]);

/////////////////////////

for(i=0;i<ele-1;i++)
{
for(j=0;j<ele-1-i;j++)
{
if(strcmp(p[j],p[j+1])>0)
{
t=p[j];
p[j]=p[j+1];
p[j+1]=t;
}
}
}

////////////////////////

printf("after\n");
for(i=0;i<ele;i++)
printf("%s ",p[i]);
	
return 0;
}
