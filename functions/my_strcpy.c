#include<stdio.h>
void my_strcpy(const char *,char *);
int main()
{
char s[20];
printf("enter the string:\n");
scanf("%s",s);
char d[20];

my_strcpy(s,d);
printf("%s",d);
return 0;
}

void my_strcpy(const char *s,char *d)
{
/*
int i;
for(i=0;s[i];i++)
	d[i]=s[i];
d[i]=s[i];
*/

while(*s)
	*d++=*s++;
*d=*s;
}
