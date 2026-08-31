#include<stdio.h>
int main()
{
int a,num,i,factorial;

printf("enter the number:\n");
scanf("%d",&num);
factorial=1;
for(i=1;i<=num;i++)
{


factorial=factorial*i;

//printf("sum=%d",sum);

}
printf("factorial=%d\n",factorial);



return 0;
}
