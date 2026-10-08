#include<stdio.h>
#include<stdlib.h>
int main(int argc, char **argv)
{
if(argc!=3)
{
	printf("usage: ./a.out data key\n");
	return 1;
}
FILE *fs;
char ch;
fs=fopen(argv[1],"r+");
if(fs==0)
{
printf("file not present\n");
return 1;
}
while((ch=fgetc(fs))!=EOF)
{
fseek(fs,-1,SEEK_CUR);
fputc(ch+atoi(argv[2]),fs);
}
fclose(fs);
printf("file '%s' encrypted successfully\n",argv[1]);
return 0;
}
