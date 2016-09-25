#include <stdio.h>
#include <stdlib.h>

int add(int a,int b){
	
	return a + b;
}

int calc(int a,int b,int *p){
	
	*p = a - b;
	
	return a + b;
}

int main(){
	
	int a = 40;
	int b = 60;
	int sum = 0;
	int result = 0;
	
//	sum = add(a,b);
	
	sum = calc(a,b,&result);
	
	printf("%d + %d = %d\n",a,b,sum);
	printf("%d - %d = %d\n",a,b,result);
	
	return 0;
} 
