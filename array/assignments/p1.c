//wap to print array using int pointer
//

#include<stdio.h>
int main()
{

int ele,i;
printf("enter the number of elements:\n");
scanf("%d",&ele);
int a[ele];
printf("enter the elements:\n");
for(i=0;i<ele;i++)
	scanf("%d",&a[i]);

int *p;
p=a;

printf("-----------------\n");

for(i=0;i<ele;i++)
printf("%d ",*(p+i));

return 0;
}
