#include<stdio.h>
int main()
{
int x[3][2],y[2][3],i,j;
 for(i=0;i<3;i++)
   for(j=0;j<2;j++)
   {
   	scanf("%d",&x[i][j]);
   	y[j][i]=x[i][j];
   	
	} 
 for(i=0;i<2;i++)	
 {
 	for(j=0;j<3;j++)
 	   printf("%d  ",y[i][j]);
	printf("\n");	 
 }
 return 0;
}
