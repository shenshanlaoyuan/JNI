#include <stdio.h>

int main() {

	int i = -30;
	unsigned int u = 100;

	printf("%%d : %d\n",i);
	printf("%%u : %u\n",u);
	//#显示八进制和十六进制前导 
	printf("%%o : %o\n",u);
	printf("%%x : %x\n",u);
	printf("%%#o : %#o\n",u);
	printf("%%#x : %#x\n",u);
	
	printf("%%c : %c\n",'U'); 
	printf("%%s : %s\n","hello world");
	
	printf("%%f : %f\n",3.14);
	
	return 0;
}
