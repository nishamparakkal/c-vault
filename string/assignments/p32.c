//WAP in C to remove conjucutive spaces in string
#include<stdio.h>
int main()
{
int i,j,k,l,t,c=0;
char s[30];
char *p;

printf("enter the string:\n");
scanf("%[^\n]",s);

for(i=0;s[i];i++)
{
if(s[i]==' ' && s[i+1]==' ')
{
for(j=i;s[j];j++)
s[j]=s[j+1];
i--;
}

}

printf("%s",s);

return 0;
}
