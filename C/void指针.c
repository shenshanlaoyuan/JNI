#include <stdio.h> 

int main(){
	
	int *p = NULL;
	char *q = NULL;
	void *v = NULL;
	
	//p = (int *)q;
	
	v = q;//void *指针变量可以接受任意类型指针赋值 
	p = v;//void *指针可向任意指针变量赋值 
	
	return 0;
}
