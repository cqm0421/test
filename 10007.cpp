#include<stdio.h>
int main()
{
	int n;
	int a=1,b=1,c=1;
	scanf("%d",&n);
	for(int i=3;i<=n;i++)
	{
		c=(a+b)%10007;
		a=b;
		b=c;
	}
	printf("%d",c);
	return 0;
	
}
