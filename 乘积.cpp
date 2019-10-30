#include<stdio.h>
int main()
{
	int i=1,prod;
	i=1;
	prod=1;
	while(i<=10)
	{
		prod=prod*i;
		i=i+1;
	}
	printf("prod=%d",prod);
	return 0;
 } 
