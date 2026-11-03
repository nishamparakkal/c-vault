#include<stdio.h>
void function(int *,int);
int main()
{
	int a[4];
	int ele,i;
	ele=sizeof(a)/sizeof(a[0]);
	printf("enter the array\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	for(i=0;i<ele;i++)
	function(&a[i],ele);	
	return 0;
}

void function(int *p,int ele)
{
l:	int i,digit,sum;
	for(sum=0;*p;*p=*p/10)
	{
		digit=*p%10;
		sum=sum+digit;
	}
	*p=sum;
	if(*p>=0 && *p<=9)
	printf("%d ",*p);
	else
		goto l;

}
