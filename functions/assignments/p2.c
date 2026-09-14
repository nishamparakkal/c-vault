//WAP in C Given an array, delete all Armstrong numbers

#include<stdio.h>

void armstrong(int *,int);
int main()
{
	int i,ele,a[5],d;
	int *p;
	ele=sizeof(a)/sizeof(a[0]);
	printf("enter the elements\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	p=a;
	armstrong(p,ele);


	return 0;

}

void armstrong(int *p,int ele)
{

	int i,power,digit,sum,d,c,count,temp1,temp2,k;
	for(i=0;i<ele;i++)
	{
		sum=0;
		temp1=p[i];
		for(count=0;temp1;temp1/=10)
			count++;
		temp2=p[i];
		for(;temp2;temp2=temp2/10)
		{
			digit=temp2%10;
			for(c=0,power=1;c<count;c++)
				power=power*digit;

		
		sum=sum+power;
		}
		if(sum==p[i])
		{
			for(k=i;k<ele;k++)
				p[k]=p[k+1];
			ele--;
			i--;

		}
	}
	for(i=0;i<ele;i++)
		printf("%d ",p[i]);
	printf("\n");
	

}
