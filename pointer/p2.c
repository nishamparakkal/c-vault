// reverse the int using pointer
#include<stdio.h>
int main()
{
int a,rev=0,r;
int *p;

printf("enter the number\n");
scanf("%d",&a);

p=&a;

while(*p)
{
r=*p%10;
rev=rev*10+r;
*p=*p/10;

}
printf("after: %d",rev);


return 0;
}
