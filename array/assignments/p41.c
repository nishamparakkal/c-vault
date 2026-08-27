#include<stdio.h>
int main()
{
	int ele,i,j;
	printf("enter the number of elements:\n");
	scanf("%d",&ele);

	int a[ele],len,temp1,temp2;
	printf("enter the elements\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	///////////////////////////// 
	len=ele-1;
	temp1=a[0];
	temp2=a[1];
		for(j=0;j<2;j++)
		{
			for(i=0;i<ele;i++)
				a[i]=a[i+1];
		}
	a[len]=temp2;
	a[len-1]=temp1;


		////////////////////////////   

		for(i=0;i<ele;i++)
			printf("%d ",a[i]);


	return 0;
}
