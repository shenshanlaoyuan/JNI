#include <stdio.h>

int main() {

	//�������� char short int long
	//signed unsigned ,��������ǰȱʡ��ʾsigned
	//sizeof()���������һ������ռ�ֽ���

	printf("char : %d\n",sizeof(char));
	printf("short : %d\n",sizeof(short));
	printf("int : %d\n",sizeof(int));
	printf("long : %d\n",sizeof(long));

	printf("unsigned int : %d\n",sizeof(unsigned int));

	printf("float : %d\n",sizeof(float));
	printf("double : %d\n",sizeof(double));
	return 0;
}
