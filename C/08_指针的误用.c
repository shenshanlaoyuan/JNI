#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int *p = NULL;//使用指针需要让其指向一段合法申请的内存空间 
	int i = 120;
	char *q = NULL;
	
	p = &i;
	
	*p = 240;
	
	printf("*p = %d\n",*p);
	
	q = (char *)&i;//指针相关的两个属性：内存单元的编号值，指针类型 
	
	return 0;	
}

