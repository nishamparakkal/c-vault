//Write a C program using both an int * and a char * pointer to modify a specific byte of an integer

#include<stdio.h>
int main()
{
int a,byte;
int *p;
unsigned char *q;
unsigned int b;

printf("enter an int num\n");
scanf("%x",&a);
p=&a;
q=(unsigned char *)&a;

printf("enter byte pos(0-3)\n");
scanf("%d",&byte);

q=q+byte;
printf("enter the new value for that byte in hexadecimal\n");
scanf(" %x",&b);
*q=b;

printf("after: %x",a);




return 0;
}
