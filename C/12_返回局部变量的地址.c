#include <stdio.h>
#include <stdlib.h>

int *c_fun(){
	//int a = 10;//ջ�ռ� ���õ�ʱ����Ҫ���룬������Զ��ͷ� 
	static int a;// = 10;
	return &a;
}

int main(){
	
	int *p = NULL;
	
	p = c_fun();
	
	printf("*p = %d\n",*p);
	
	return 0;
} 
