#include<stdio.h>
int main()
{
	int a;
	printf("请输入月份:1-12\n");
	scanf("%d",&a);
	switch(a)
	{
		case 3:
		case 4:
		case 5:
		printf("春天");
		break;
		case 6:
		case 7:
		case 8:
		printf("夏天");
		break;
		case 9:
		case 10:
		case 11:
		printf("秋天");
		break;
		case 12:
		case 1:
		case 2:
		printf("冬天");
		break;
		default:
		printf("输入错误");
		
		 
	}
	return 0;
}
