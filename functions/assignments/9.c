#include<stdio.h>
int main()
{
	int a[7];
	int ele,t,i,j,c,k;
	ele=sizeof(a)/sizeof(a[0]);
	printf("enter the array\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	for(i=0;i<ele;i++)
	{
		c=1;
		for(j=0;j<ele;j++)
		{
			if(a[i]==a[j])
				c++;
		}
		if(c<3)
		{
			for(k=i;k<ele;k++)
			{
				a[k]=a[k+1];
				ele--;
			}
		}

	}



	for(i=0;i<ele;i++)
		printf("%d ",a[i]);

	return 0;
}
