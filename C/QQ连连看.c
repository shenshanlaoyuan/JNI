#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int t = 120;
	int i = 0;
	
	printf("欢迎来玩连连看...\n");
	printf("&t = %p\n",&t);
	
	for(t = 120;t > 0;t--){
		
		printf("剩余%ds\n",t);
		
		sleep(1);
	}
	
	system("pause"); 
	return 0;
}

