#include<stdio.h>

int main(void){
	char string[20] = "Hello, C World!\n";
	printf("%s", string);
	int num;
	printf("please input a number:");
	scanf("%d", &num);
	printf("%d\n", num);
	return 0;
}
