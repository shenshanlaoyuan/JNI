#include <stdio.h>

int main(){
	
	int i = 20;
	char c = 'k';
	
	int *p;//int *类型指针变量可以保存一个int类型变量首地址 
	char *q;
	
	p = &i;//指针变量p指向i 
	q = &c;
	
	//p = &c;
	//p = (int *)&c;//如果真要保存需要强转 (要转的指针类型) 
	
	//*p <=> i 
	printf("i = %d\n",*p); 
	return 0;
}
