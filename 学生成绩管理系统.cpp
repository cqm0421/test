#include<stdio.h>
#include<string.h>
int main()
{
	float math_score[5],Chinese_score[5],English_score[5],average_score[5];
	char name[5][10];
	int rank[5];
	char grade[5];
	char tempgrade;
	int flag;
	int i,j;
	float temp;
	char string[10];
	
	
	printf("******欢迎使用学生成绩管理系统******");
	while(1)
	{
		printf("***********************************\n");
		printf("请输入菜单选项：\n");
		printf("0 退出系统\n");
		printf("1 输入学生成绩\n");
		printf("2 显示学生成绩\n");
		printf("3 显示均分排序\n");
		printf("***********************************\n");
		scanf("%d",&flag);
		switch(flag)
		{
			case 1:
				for(i=1;i<5;i++)
				{printf("请输入姓名");
				scanf("%s",name[i]);
				printf("输入成绩，格式为：数学成绩，语文成绩，英语成绩\n");
				scanf("%f,%f,%f",&math_score[i],Chinese_score[i],English_score[i]) ;
				average_score[i]=(math_score[i]+Chinese_score[i]+English_score[i])/3;
				if(average_score[i]>=90&&average_score[i]<=100)
				     grade[i]='A';
				else if(average_score[i]>=80)
				        grade[i]='B';
					else if(average_score[i]>=70)
					        grade[i]='C';
					    else if(average_score[i]>=60)
						        grade[i]='D';
						    else if(average_score[i]>=0)
							        grade [i]='E';
							    else
							        printf("输入错误\n");
				rank[i]=0;
				getchar();			        			     
				}
		        break;
		    case 2:
			    printf("------------------------------------\n");
				printf("|姓名|数学成绩|语文成绩|英语成绩|平均成绩|等级|名次|\n");
				for(i=0;i<5;i++) 
				{
					printf("-----------------------------------------\n");
					printf("|%-12s|%-12.2f|%-12.2f|%-12.2f|%-12.2f|%-12c|%-12d|\n",
					name[i],math_score[i],Chinese_score[i],English_score[i],average_score[i],grade[i],rank[i]);	
			    }   
		        printf("----------------------------------\n");
		        break;
		    case 3: 
			    for(i=0;i<4;i++)
				   for(j=0;j<4-i;j++)
				       if(average_score[j]<average_score[j+1])//第j名学生和j+1名交换位置 
					   {
					   	  temp=math_score[j];
					   	  math_score[j]=math_score[j+1];
					   	  math_score[j+1]=temp;
					   	  
					   	  temp=Chinese_score[j];
					   	  Chinese_score[j]=Chinese_score[j+1];
					   	  Chinese_score[j+1]=temp;
					   	  
					   	  temp=English_score[j];
					   	  English_score[j]=English_score[j+1];
					   	  English_score[j+1]=temp;
					   	  
					   	  temp=average_score[j];
					   	  average_score[j]=average_score[j+1];
					   	  average_score[j+1]=temp;
					   	  
					   	  tempgrade=grade[j];
					   	  grade[j]=grade[j+1];
						  grade[j+1]=tempgrade;
						  
						  strcpy(string,name[j]);
						  strcpy(name[j],name[j+1]);
						  strcpy(name[j+1],string);					   	 
						   }    
		             for(i=0;i<5;i++)
					     rank[i]=i+1;
					 break;
			case 0:
			    printf("退出系统\n");
				return 0;		 	    
		
		
		
		
		
		
		
		}
		
		
	}
 
 
    return 0;
 } 
