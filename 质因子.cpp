#include<stdio.h> 
int main()
{
	int a,b=0,i;
	printf("������һ��2-10000֮�������");
	scanf("%d",&a);
	for(i=1;i<=a-1;i++)
	{
	
		if(a%i==0) 
		printf("%d",i);
	
		  
	    else continue;
	    

	}
	return 0;
}
