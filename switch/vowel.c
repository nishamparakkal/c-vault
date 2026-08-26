#include<stdio.h>
int main()
{
char c;
printf("enter the letter:\n");
scanf("%c",&c);
switch(c)
{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':printf("vowel\n");
		 break;
	default:printf("not vowel");	 

}

return 0;
}
