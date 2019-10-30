#include<stdio.h> 
int main()
{
	int k,p,i;
	printf("请输入一个2-10000的数字");
	scanf("%d",&k) ;
	if(k>=2&&k<=10000)
	{
		for(i=2;i<=k;i++)
		{
			while(k%i==0)
			{
				p=k/i;
				k=p;
				printf("%d ",i);
				
			}
		}
	}
	else
	{printf("输入错误"); 
	}
	return 0;
}

