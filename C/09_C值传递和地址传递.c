#include <stdio.h>
#include <stdlib.h>

void swap1(int m,int n) {
	int temp = 0;

	temp = m;
	m = n;
	n = temp;

}

void swap2(int *pa, int *pb){
	int temp = 0;
	
	printf("pa = %p pb = %p\n",pa,pb);
	
	temp = *pa;//*pa <=> a
	*pa = *pb;
	*pb = temp;
	
}

void swap3(int *pa, int *pb){
	int *temp;
	int t;
	
	temp = &t;
	
	printf("pa = %p pb = %p\n",pa,pb);
	
	*temp = *pa;
	*pa = *pb;
	*pb = *temp;
	
}

int main() {

	int a = 10;
	int b = 20;
	
	printf("&a = %p &b = %p\n",&a,&b);

	printf("a = %d b = %d\n",a,b);
	swap1(a,b);//值传递
	printf("a = %d b = %d\n",a,b);
	
	
	printf("a = %d b = %d\n",a,b);
	swap2(&a,&b);//地址传递
	printf("a = %d b = %d\n",a,b);
	
	swap3(&a,&b);
	
	return 0;
}
