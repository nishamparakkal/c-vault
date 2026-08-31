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
	int t,c,k;
	///////////////////////////// 

	for(i=0;i<ele;i++)
	{
		for(j=i+1,c=1;j<ele;j++)
		{
			if(a[i]==a[j])
			{
				c++;
				for(k=j;k<ele;k++)
					a[k]=a[k+1];
				j--;
				ele--;
			}

		}

		if(c>1)
			printf("%d-> %d\n",a[i],c);

	}

	////////////////////////////   
	/*
	   for(i=0;i<ele;i++)
	   printf("%d ",a[i]);
	   */

	return 0;
}
