#include<stdio.h>
int main()
{
	int ele,i,j;
	printf("enter the number of elements:\n");
	scanf("%d",&ele);

	int a[ele],c;
	printf("enter the elements\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	int t,fact,r;
	///////////////////////////// 

	for(i=0,c=0;i<ele;i++)
	{
	for(j=2;j<a[i];j++)
	{
	if(a[i]%j==0)
		break;
	}
	if(a[i]==j)
	{
		printf("%d ",a[i]);
		c++;
	}
	}

	////////////////////////////   
	
	printf("count:%d \n",c);
	/*
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);

	*/
	return 0;
}
