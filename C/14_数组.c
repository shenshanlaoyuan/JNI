#include <stdio.h>
#include <stdlib.h>

int main(){
	
//	int[] arr;
	int i = 0;
	short arr[10];//������400��int�����ļ��� 
	//arr[0]	arr[9]
	
	char buf[10];
	
	for(i = 0;i < 10;i++){
		printf("arr[%d] = %d &arr[%d] = %p\n",i,arr[i],i,&arr[i]);
	}
	
//	arr[10] = 10;

//	printf("Input string:");
//	scanf("%s",buf);
	
	return 0;
} 
