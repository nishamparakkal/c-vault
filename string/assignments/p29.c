//WAP to count the vowels in a string.
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

if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
	c++;

}

printf("%d",c);

return 0;
}
