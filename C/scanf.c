#include <stdio.h>

int main(){
	
	int i = 0;
	char buf[10];//�ַ����飬���Ա����ַ��� '\0'��Ϊ�ַ����Ľ�����־ 
/* 
	printf("������������");
	scanf("%d",&i);//&i����scanf�������ݴ浽�� 
	
	printf("%d\n",i);
*/

	printf("�����ַ�����");
	scanf("%s",buf);//����������������Ԫ���׵�ַ  buf[0]	&buf[0]	<=> buf
	
	printf("buf:%s\n",buf);
	
	return 0;
}
