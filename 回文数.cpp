#include<stdio.h>
int main()
{
	printf("����һ����λ����");
	int a,b,c,d,e;
	scanf("%d",&a);
	b=a/10000;
	c=a%10;
	d=b%10;
	e=c%10;
	if((b==c)&&(d==e))
	{printf("�ǻ�����"); 
	}
	else{printf("���ǻ�����"); 
	}
	return 0;
 } 
