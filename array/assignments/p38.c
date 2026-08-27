#include<stdio.h>
int main()
{
	int ele,i,j;
	printf("enter the number of elements:\n");
	scanf("%d",&ele);

	int a[ele],len,temp;
	printf("enter the elements\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	
	///////////////////////////// 
	len=ele-1;
	temp=a[len];
	for(i=len;i>=0;i--)
		a[i]=a[i-1];
	a[0]=temp;



	////////////////////////////   

	for(i=0;i<ele;i++)
		printf("%d ",a[i]);


	return 0;
}
