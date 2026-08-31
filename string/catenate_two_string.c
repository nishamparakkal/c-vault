#include<stdio.h>
int main()
{
char s[10],d[20];
printf("enter source and destination:\n");
scanf("%s %s",s,d);
printf("before: %s\n",d);

int i,j;
for(i=0;d[i];i++);
for(j=0;s[j];j++,i++)
d[i]=s[j];
d[i]=s[j];

printf("after: %s\n",d);




return 0;
}
