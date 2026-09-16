// merge two strings to another

#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,l1,l2,c,k;
	char s1[30],s2[30],s3[30];
	char *p,*q;

	printf("enter the string:\n");
	scanf("%s",s1);
	scanf(" %s",s2);
	

	for(i=0,j=0,k=0;s1[i]!='\0'&&s2[j]!='\0';k++,i++,j++)
	{
	s3[k]=s1[i];
	k++;
	s3[k]=s2[j];
	}
	for(;s1[i]!='\0';)
		s3[k++]=s1[i++];
	for(;s2[j]!='\0';)
		s3[k++]=s2[j++];
	s3[k]='\0';
	printf("%s",s3);
	return 0;
}
