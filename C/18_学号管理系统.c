#include <stdio.h>
#include <stdlib.h>//malloc()/free()

int main(){
	
	int num = 0;
	int i = 0;
	
	//int id[20];//��ջ�Ϸ���
	//int *p = id;
	//p[i] <=> id[i] 
	
//	int *pid = (int *)malloc(20 * sizeof(int));//�ڶ���������һ��20Ԫ�ص�int���� 
	//pid[i]  <=> *(pid + i) 
	
	printf("����ѧ��������");
	scanf("%d",&num);
	
	int *pid = (int *)malloc(num * sizeof(int)); //�ڶ�������ѧ��ѧ������
	
	for(i = 0;i < num;i++) {
		
//		scanf("%d",&pid[i]);
		scanf("%d",pid + i); 
	}
	
	for(i = 0;i < num;i++){
		printf("ѧ�ţ�%d\n",pid[i]);
	}
	
	printf("�ٴ�����ѧ��������");
	scanf("%d",&num);
	
	pid = (int *)realloc(pid,num * sizeof(int)); 
	
	for(i = 0;i < num;i++){
		scanf("%d",pid + i);
	} 
	
	for(i = 0;i < num;i++){
		printf("ѧ�ţ�%d\n",pid[i]);
	}
	
	free(pid);//�Լ����룬����Ҫ�Լ��ͷ� 
	
	return 0;
} 
