#include<stdio.h>
int main()
{
int a[5]={10,20,30,40,50};
int *p,i;
p=a;
for(i=0;i<5;i++)
{//	printf("%d ",*p++);
printf("%d %d \n",p[i],*(p+i));
}

return 0;
}
