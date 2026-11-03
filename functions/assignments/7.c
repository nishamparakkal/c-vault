#include<stdio.h>
int main()
{
int a[5];
int ele,t,i,j;
ele=sizeof(a)/sizeof(a[0]);
printf("enter the array\n");
for(i=0;i<ele;i++)
	scanf("%d",&a[i]);

for(i=0,j=ele-1;i<j;i++,j--)
{
t=a[i];
a[i]=a[j];
a[j]=t;
}

for(i=0;i<ele;i++)
printf("%d ",a[i]);

return 0;
}
