#include <stdio.h>
#include <stdlib.h>

int *c_fun(){
	//int a = 10;//栈空间 ：用的时候需要申请，用完会自动释放 
	static int a;// = 10;
	return &a;
}

int main(){
	
	int *p = NULL;
	
	p = c_fun();
	
	printf("*p = %d\n",*p);
	
	return 0;
} 
