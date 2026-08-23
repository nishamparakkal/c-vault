//wap in c to find sum of 1st digit of all array elements.

#include<stdio.h>
int main()
{
int ele,i;
printf("enter the num of elements:\n");
scanf("%d",&ele);
int r,rev,sum=0,firstdigit,a[ele];
printf("enter the elements\n");
for(i=0;i<ele;i++)
	scanf("%d",&a[i]);
///////////////////////////////


for(i=0;i<ele;i++)
{
for(rev=0;a[i];a[i]=a[i]/10)
{
r=a[i]%10;
rev=rev*10+r;
}
firstdigit=rev%10;
sum=sum+firstdigit;
}




//////////////////////////////

for(i=0;i<ele;i++)
	printf("%d ",a[i]);

printf("--------------\n");

printf("sum=%d",sum);

return 0;
}
