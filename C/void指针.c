#include <stdio.h> 

int main(){
	
	int *p = NULL;
	char *q = NULL;
	void *v = NULL;
	
	//p = (int *)q;
	
	v = q;//void *ָ��������Խ�����������ָ�븳ֵ 
	p = v;//void *ָ���������ָ�������ֵ 
	
	return 0;
}
