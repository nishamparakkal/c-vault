//user defined string lenth.
#include<stdio.h>
int my_strlen(const char *);
int main()
{
char s[20];
printf("enter the string:\n");
scanf("%s",s);
int len;
len=my_strlen(s);
printf("%d",len);

return 0;
}

int my_strlen(const char *s)
{
int i;
for(i=0;s[i];i++);
return i;
}
