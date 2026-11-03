#include<stdio.h>
char * my_strchr(const char *,char);
int main()
{
int p;
char s[30],ch;
printf("enter the string:\n");
scanf("%s",s);
printf("enter the char\n");
scanf(" %c",&ch);
p=my_strchr(s,ch);
if(p)
	printf("present\n");
else
	printf("not present\n");

return 0;
}
char * my_strchr(const char *s,char ch)
{
int i;
while(*s)
{
if(*s==ch)
return s;
s++;
}

}

