#include<stdio.h>
int main()
{
	int a, b;
	printf("������һ����\n");
	scanf("%d",&a);
	if (a % 2 == 0) b = a * a * a;
	else { b = a * a ;
	} 
	printf("���Ϊ��%d", b);
	return 0;
 
}
