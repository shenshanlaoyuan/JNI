#include <stdio.h>
#include <stdlib.h>
#include <string.h>//�ַ���������غ������� 

int main(){
	
	char buf[10] = "abcde";//'\0' 
	
	char *p = buf;//p ָ����buf[0] 
	
	printf("sizeof(buf) = %d\n",sizeof(buf));//�����sizeof()��������ַ���������� 
	
	printf("strlen(buf) = %d\n",strlen(buf));//�⺯��strlen()�����ַ������� 
	return 0;
} 
