#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int t = 120;
	int i = 0;
	
	printf("��ӭ����������...\n");
	printf("&t = %p\n",&t);
	
	for(t = 120;t > 0;t--){
		
		printf("ʣ��%ds\n",t);
		
		sleep(1);
	}
	
	system("pause"); 
	return 0;
}

