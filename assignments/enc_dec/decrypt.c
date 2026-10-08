#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char **argv)
{
	if(argc!=3)
	{
		printf("usage: ./a.out data key\n");
		return 1;
	}
	FILE *fs,*fp;
	char ch;
	char outname[100];
	//outname=malloc(strlen(argv[1])+strlen("_dec")+1);
	
	strcpy(outname,argv[1]);
	strcat(outname,"_dec");

	fs=fopen(argv[1],"r");
	if(fs==0)
	{
		printf("file not found\n");
		return 0;
	}

	fp=fopen(outname,"w");

	while((ch=fgetc(fs))!=EOF)
	{
		fputc(ch-atoi(argv[2]),fp);
	}
	
	fclose(fs);
	fclose(fp);
//	free(outname);
	printf("file '%s' is decrypted",argv[1]);


	return 0;
}
