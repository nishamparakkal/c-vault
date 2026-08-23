// wap to find the sum of all array elements. 

#include<stdio.h>
int main()
{
int ele,i;
printf("enter the num of elements:\n");
scanf("%d",&ele);
int sum,a[ele];
printf("enter the elements\n");
for(i=0;i<ele;i++)
	scanf("%d",&a[i]);
/////////////////////////////////
sum=0;
for(i=0;i<ele;i++)
{
sum=sum+a[i];
}


//////////////////////////////////

for(i=0;i<ele;i++)
	printf("%d ",a[i]);
printf("\n");

printf("sum=%d\n",sum);

return 0;
}
