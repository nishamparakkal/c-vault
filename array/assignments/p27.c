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

	///////////////////////////// 
	for(i=0;i<ele;i++)
	{
		if(a[i]%2)
		{
			for(j=i;a[j];j++)
				a[j]=a[j+1];
			i--;
			ele--;
		}
	}


	////////////////////////////   

	for(i=0;i<ele;i++)
		printf("%d ",a[i]);


	return 0;
}
