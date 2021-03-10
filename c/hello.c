#include<stdio.h>

int main(void){
	char string[20] = "Hello, C World!\n";
	printf("%s", string);
	int num[5] = {1, 5, 3, 6, 9};
	int m = max(num, 5);
	printf("Max = %d\n", m);
	return 0;
}
