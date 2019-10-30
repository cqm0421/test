#include<stdio.h>
int main()
{
	int a, b;
	printf("请输入一个数\n");
	scanf("%d",&a);
	if (a % 2 == 0) b = a * a * a;
	else { b = a * a ;
	} 
	printf("结果为：%d", b);
	return 0;
 
}
