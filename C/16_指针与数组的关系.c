#include <stdio.h>

void print_arr(int *p,int len){
	int i = 0;
	
	for(i = 0;i < len;i++){
//		printf("%d\n",*(p + i));
		printf("%d\n",p[i]);//指针变量保存数组，可按数组形式访问数组的元素 
	}
	
}

//void sort(int p[],int len)
void sort(int *p,int len){
	int i = 0;
	int j = 0;
	int tmp;
	
	for(i = 0;i < len - 1;i++){//排序的轮数
	
		for(j = 0;j < len - 1 - i;j++){//每轮排序比较次数 
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
	
	print_arr(a,5);//数组传参：传数组名+元素个数 
	
	
	return 0;
} 
