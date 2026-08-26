#include<stdio.h>
int main()
{
int n1,n2,r;
char op;
printf("enter the two num:\n");
scanf("%d %d",&n1,&n2);
printf("enter your option:\n");
printf("press + for addition:\npress - for subtraction:\npress * for multiplication:\npress / for division:\n");
scanf(" %c",&op);

switch(op)
{
	case '+':r=n1+n2;
		 break;
	case '-':r=n1-n2;
		 break;
	case '*':r=n1*n2;
		 break;
	case '/':r=n1/n2;
		 break;
	 
	default:printf("unknown option:\n");
}
printf("result=%d",r);

return 0;
}
