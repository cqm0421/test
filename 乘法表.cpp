#include<stdio.h>
int main()
{
	int i,j,mul;
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=10;j++)
		{
			mul=i*j;
			printf("%d*%d=%-4d",i,j,mul);
			
		}
		printf("\n");
	}
	return 0;
}
