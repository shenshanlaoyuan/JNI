#include <stdio.h>
#include <stdlib.h>

int main() {

	int i = 10;//申请了4bytes内存单元，存入10
	int j = 20;

	int *p;//在定义指针变量的时候*区分变量不是普通变量而指针变量

	printf("i = %d\n",i);

	p = &i;//&表示取变量i在内存中首地址

	i = 20;

	printf("i = %d\n",i);

	*p = 30;//*指针运算符
	printf("i = %d\n",i);
	
	// i <=> *p 
	
	i = i * j;
	
	int *q = &j;//int *q;q = &j;

	*q = 20;

	return 0;
}
