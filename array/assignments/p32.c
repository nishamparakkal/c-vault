#include<stdio.h>
int main()
{
	int ele,i,j;
	printf("enter the number of elements:\n");
	scanf("%d",&ele);

	int a[ele];
	printf("enter the elements\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	int t,fact,r;
	///////////////////////////// 

	
	for(i=0;i<ele;i++)
	{
	for(fact=1;a[i]>0;a[i]=a[i]-1)
	{
	fact=fact*a[i];
	
	}
	a[i]=fact;
	}




	////////////////////////////   

	for(i=0;i<ele;i++)
		printf("%d ",a[i]);


	return 0;
}
