#include<stdio.h>
void my_strrev1(char *,char *);
int my_strlen(char *);
int main()
{
char s[20];
printf("enter the string\n");
scanf("%s",s);
my_strrev1(s,s+my_strlen(s)-1);
printf("%s",s);
return 0;
}

int my_strlen(char *s)
{
int i;
for(i=0;s[i];i++);
return i;
}
void my_strrev1(char *p, char *q )
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
