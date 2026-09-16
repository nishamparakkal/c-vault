//WAP in C to reverse last word in string
#include<stdio.h>
int main()
{
int i,j,k,l,t;
char s[30];
char *p;

printf("enter the string:\n");
scanf("%[^\n]",s);
for(l=0;s[l];l++);
for(i=l-1;s[i]!=' ';i--);
//printf("%d ",i);
//printf("%d \n",l);
i=i+1;
for(i,j=l-1;i<j;i++,j--)
{
t=s[i];
s[i]=s[j];
s[j]=t;
}

printf("%s",s);



return 0;





return 0;
}
