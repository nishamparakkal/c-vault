#include<string.h>
#include<stdio.h>
int main()
{
char s1[30],s2[30],*p,*q;
int a;
printf("enter the main string and substring\n");
scanf("%[^\n] %[^\n]",s1,s2);
p=s1;
q=s2;
a=strstr(s1,s2);
if(a)
	printf("present\n");
else
	printf("not present\n");


return 0;
}
