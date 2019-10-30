#include<stdio.h>
int main()
{
	char x='a';
	printf("请输入一个大写字母；");
	scanf("%c",&x);
	x=x+32;
	printf("%c\n",x);
	return 0;
 } 
