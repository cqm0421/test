#include<stdio.h> 
int main()
{
	int k,p,i;
	printf("������һ��2-10000������");
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
	{printf("�������"); 
	}
	return 0;
}

