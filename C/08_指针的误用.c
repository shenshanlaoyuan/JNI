#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int *p = NULL;//ʹ��ָ����Ҫ����ָ��һ�κϷ�������ڴ�ռ� 
	int i = 120;
	char *q = NULL;
	
	p = &i;
	
	*p = 240;
	
	printf("*p = %d\n",*p);
	
	q = (char *)&i;//ָ����ص��������ԣ��ڴ浥Ԫ�ı��ֵ��ָ������ 
	
	return 0;	
}

