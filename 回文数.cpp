#include<stdio.h>
int main()
{
	printf("输入一个五位数：");
	int a,b,c,d,e;
	scanf("%d",&a);
	b=a/10000;
	c=a%10;
	d=b%10;
	e=c%10;
	if((b==c)&&(d==e))
	{printf("是回文数"); 
	}
	else{printf("不是回文数"); 
	}
	return 0;
 } 
