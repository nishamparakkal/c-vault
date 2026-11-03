#include<stdio.h>
void my_strrev(char *);
int main()
{
char s[20];
printf("enter the string\n");
scanf("%s",s);
my_strrev(s);
printf("%s\n",s);


return 0;
}
void my_strrev(char *p)
{
char *q,t;
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
