#include <stdio.h>

int main(){
	
	int i = 0;
	char buf[10];//字符数组，可以保存字符串 '\0'作为字符串的结束标志 
/* 
	printf("请输入整数：");
	scanf("%d",&i);//&i告诉scanf输入数据存到哪 
	
	printf("%d\n",i);
*/

	printf("输入字符串：");
	scanf("%s",buf);//数组名代表数组首元素首地址  buf[0]	&buf[0]	<=> buf
	
	printf("buf:%s\n",buf);
	
	return 0;
}
