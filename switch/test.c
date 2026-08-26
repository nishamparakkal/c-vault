#include<stdio.h>
int main()
{
int n;
printf("enter n:\n");
scanf("%d",&n);
switch(n)
{
	case 1:printf("one\n");
	       break;
	case 2:printf("two\n");
	       break;
	case 3:printf("three\n");
	       break;
	default:printf("not one two three\n");
}

return 0;
}
