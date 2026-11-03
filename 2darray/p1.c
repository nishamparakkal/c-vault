//WAP to check given matrix is an identity matrix or not
#include<stdio.h>
int main()
{
	int i,j,r,c;
	printf("enter the rows and colums\n");
	scanf("%d%d",r,c);
	int a[r][c];
	//r=sizeof(a)/sizeof(a[0]);
	//c=sizeof(a[0]/sizeof(a[0][0]));
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	if(r==c)
	{
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{	
				if(i==j)
				{
					if((a[i][j])==1)
					else
						break;
				}
				else if
				{
					if((a[i][j])==0)
				}
					else
						break;
			}
		}
		printf("identity\n");
	}
	else
		printf("not identity\n");
	return 0;
}

