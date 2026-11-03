#include<stdio.h>
int perfect(int *);
void element(int *);
int main()
{
	int a[5];
	int ele,i;
	ele=sizeof(a)/sizeof(a[0]);
	printf("enter the array\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	for(i=0;i<ele;i++)
		element(&a[i]);



	return 0;
}
void element(int *p)
{
	int r=0,temp;
	temp=*p;
	for(;temp;temp=temp/10)
	{
		if(temp/10==0)
			r=perfect(&temp);
	}
	
	if(r)
	printf("%d ",*p);

}


int perfect(int *p)
{
	int i,sum;
	for(i=1,sum=0;i<*p;i++)
	{
		if(*p%i==0)
			sum=sum+i;
	}
	if(sum==*p)
		return 1;
	else
		return 0;
}
