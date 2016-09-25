#include <stdio.h>

int main() {

	//整数类型 char short int long
	//signed unsigned ,整数类型前缺省表示signed
	//sizeof()运算符计算一个类型占字节数

	printf("char : %d\n",sizeof(char));
	printf("short : %d\n",sizeof(short));
	printf("int : %d\n",sizeof(int));
	printf("long : %d\n",sizeof(long));

	printf("unsigned int : %d\n",sizeof(unsigned int));

	printf("float : %d\n",sizeof(float));
	printf("double : %d\n",sizeof(double));
	return 0;
}
