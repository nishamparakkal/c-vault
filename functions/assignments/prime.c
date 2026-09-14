//WAP in C Given an array, count and print the Armstrong numbers

#include<stdio.h>


void prime_check(int *,int);
int main()
{

	int a[5],ele,i;
	int *p;
	ele=sizeof(a)/sizeof(a[0]);
	printf("enter the array elements\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	p=a;
	
	prime_check(p,ele);

	return 0;
}

void prime_check(int *p,int ele)
{
	int i,j;
	for(i=0;i<ele;i++)
	{
	for(j=2;j<*p;j++)
	{
		if(*p%j==0)
			break;
	}
	if(*p==j)
		printf("%d ",*p);
	p++;
	}


}

