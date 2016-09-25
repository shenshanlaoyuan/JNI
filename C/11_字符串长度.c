#include <stdio.h>
#include <stdlib.h>
#include <string.h>//字符串处理相关函数声明 

int main(){
	
	char buf[10] = "abcde";//'\0' 
	
	char *p = buf;//p 指向了buf[0] 
	
	printf("sizeof(buf) = %d\n",sizeof(buf));//运算符sizeof()计算的是字符数组的容量 
	
	printf("strlen(buf) = %d\n",strlen(buf));//库函数strlen()计算字符串长度 
	return 0;
} 
