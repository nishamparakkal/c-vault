#include<stdio.h>
int main()
{
	int a[5],ele;
	int *p,i,L,SL;
	ele=sizeof(a)/sizeof(a[0]);
	p=a;

	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	L=0;
	SL=0;
	i=0;
	while(i<ele)
	{
		if(*p>L)
		{
			SL=L;
			L=*p;
		}
		else if(*p>SL && *p!=L)
			SL=*p;
		i++;
		p++;
	}
	printf("Largest=%d\nSecond Largest=%d",L,SL);

	return 0;
}
