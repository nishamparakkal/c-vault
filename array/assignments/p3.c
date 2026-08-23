
// wap in c to sort 1st 4 ele of array in decending order.

#include<stdio.h>
int main()
{

int ele;

printf("enter the number of elements:\n");
scanf("%d",&ele);

int a[ele],i,j,t;
printf("enter the elements:\n");
for(i=0;i<ele;i++)
	scanf("%d",&a[i]);
printf("-----------------\n");

for(i=0;i<ele;i++)
{
for(j=i+1;j<4;j++)
{
if(a[i]<a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}



for(i=0;i<ele;i++)
printf("%d ",a[i]);


return 0;
}
