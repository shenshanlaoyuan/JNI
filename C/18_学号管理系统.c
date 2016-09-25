#include <stdio.h>
#include <stdlib.h>//malloc()/free()

int main(){
	
	int num = 0;
	int i = 0;
	
	//int id[20];//在栈上分配
	//int *p = id;
	//p[i] <=> id[i] 
	
//	int *pid = (int *)malloc(20 * sizeof(int));//在堆区分配了一个20元素的int数组 
	//pid[i]  <=> *(pid + i) 
	
	printf("输入学生人数：");
	scanf("%d",&num);
	
	int *pid = (int *)malloc(num * sizeof(int)); //在堆区分配学生学号数组
	
	for(i = 0;i < num;i++) {
		
//		scanf("%d",&pid[i]);
		scanf("%d",pid + i); 
	}
	
	for(i = 0;i < num;i++){
		printf("学号：%d\n",pid[i]);
	}
	
	printf("再次输入学生人数：");
	scanf("%d",&num);
	
	pid = (int *)realloc(pid,num * sizeof(int)); 
	
	for(i = 0;i < num;i++){
		scanf("%d",pid + i);
	} 
	
	for(i = 0;i < num;i++){
		printf("学号：%d\n",pid[i]);
	}
	
	free(pid);//自己申请，还需要自己释放 
	
	return 0;
} 
