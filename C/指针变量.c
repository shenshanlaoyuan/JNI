#include <stdio.h>
#include <stdlib.h>

int main() {

	int i = 10;//������4bytes�ڴ浥Ԫ������10
	int j = 20;

	int *p;//�ڶ���ָ�������ʱ��*���ֱ���������ͨ������ָ�����

	printf("i = %d\n",i);

	p = &i;//&��ʾȡ����i���ڴ����׵�ַ

	i = 20;

	printf("i = %d\n",i);

	*p = 30;//*ָ�������
	printf("i = %d\n",i);
	
	// i <=> *p 
	
	i = i * j;
	
	int *q = &j;//int *q;q = &j;

	*q = 20;

	return 0;
}
