// WAP in C to reverse 1st word in string using pointer.
#include<stdio.h>
int main()
{
int i,j,k,l,t;
char s[30];
char *p;

printf("enter the string:\n");
scanf("%[^\n]",s);

p=s;
for(l=0;s[l]!=' ';l++);
for(i=0,j=l-1;i<j;i++,j--)
{
t=s[i];
s[i]=s[j];
s[j]=t;

}
printf("%s",s);




return 0;
}
