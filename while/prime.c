// prime or not using while.

#include<stdio.h>
int main()
{
int i,a;
printf("enter the num;");
scanf("%d",&a);

i=2;
while(i<a)
{
if(a%i==0)
	break;
i++;

}
if(i==a)
	printf("prime\n");
else
	printf("not prime");

return 0;
}



