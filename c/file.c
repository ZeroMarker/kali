#include <stdio.h>
#include <stdlib.h>
#define N 100
 
int main(){
	FILE *fp;
	char str[N+1];
	if((fp = fopen("demo.txt", "r")) == NULL){

		printf("Failed to open file.\n");
		return 0;
	}
	while(fgets(str, N, fp) != NULL){
	printf("%s\n",str);
	}					
	fclose(fp);
	return 0;
}
