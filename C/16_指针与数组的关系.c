#include <stdio.h>

void print_arr(int *p,int len){
	int i = 0;
	
	for(i = 0;i < len;i++){
//		printf("%d\n",*(p + i));
		printf("%d\n",p[i]);//ָ������������飬�ɰ�������ʽ���������Ԫ�� 
	}
	
}

//void sort(int p[],int len)
void sort(int *p,int len){
	int i = 0;
	int j = 0;
	int tmp;
	
	for(i = 0;i < len - 1;i++){//���������
	
		for(j = 0;j < len - 1 - i;j++){//ÿ������Ƚϴ��� 
			if(*(p + j) > p[j + 1]){
				tmp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = tmp;
			} 
		} 
	}
	
}
int main(){
	
	int a[5] = {10,21,13,42,5};
	int i = 0;
	
	//sort(a[5]);
	
	sort(a,5);
	
	print_arr(a,5);//���鴫�Σ���������+Ԫ�ظ��� 
	
	
	return 0;
} 
