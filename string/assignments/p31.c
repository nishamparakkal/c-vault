// string palindrome check.
#include<stdio.h>
int main()
{
int i,j,k,l,t,c=0;
char s[30];
char *p;

printf("enter the string:\n");
scanf("%[^\n]",s);

for(l=0;s[l];l++);
for(i=0,j=l-1;i<j;i++,j--)
{
if(s[i]!=s[j])
{
break;
}
}
if(s[i]!=s[j])
printf("not palindrome\n");
else
printf("palindrome\n");
//printf("%s",s);

return 0;
}
