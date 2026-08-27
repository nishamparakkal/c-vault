#include<stdio.h>
int main()
{
	int ele,i;
	printf("enter the number of elements:\n");
	scanf("%d",&ele);

	int a[ele],len,temp1,temp2,temp3,j;
	printf("enter the elements\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	
	///////////////////////////// 
	len=ele-1;
	temp1=a[len];
	temp2=a[len-1];
	temp3=a[len-2];
	for(j=0;j<3;j++)
	{
	for(i=len;i>=0;i--)
		a[i]=a[i-1];
	}
	a[0]=temp3;
	a[1]=temp2;
	a[2]=temp1;



	////////////////////////////   

	for(i=0;i<ele;i++)
		printf("%d ",a[i]);


	return 0;
}
