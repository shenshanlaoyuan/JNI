#include <stdio.h>

int main(){
	
	int i = 20;
	char c = 'k';
	
	int *p;//int *����ָ��������Ա���һ��int���ͱ����׵�ַ 
	char *q;
	
	p = &i;//ָ�����pָ��i 
	q = &c;
	
	//p = &c;
	//p = (int *)&c;//�����Ҫ������Ҫǿת (Ҫת��ָ������) 
	
	//*p <=> i 
	printf("i = %d\n",*p); 
	return 0;
}
