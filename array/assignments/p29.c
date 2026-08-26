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
	int t;
	///////////////////////////// 
	for(i=0;i<ele;i++)
	{
		for(j=i+1;j<ele;j++)
		if(a[i]==a[j])
		{
			for(t=j;a[t];t++)
				a[t]=a[t+1];
			i--;
			ele--;
		}
	}


	////////////////////////////   

	for(i=0;i<ele;i++)
		printf("%d ",a[i]);


	return 0;
}
