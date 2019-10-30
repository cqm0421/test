#include<stdio.h>
int main()
{
	double C,F;
	printf("请输入一个华氏温度F；");
	scanf("%lf",&F);
	C=5/9*(F-32);
	printf("摄氏温度为C：%.2lf",C);

	return 0;
 } 
 
