#include <stdio.h>
#include <string.h>

int main(){

	char input[100];
	fgets(input, sizeof(input), stdin);
	
	char* token = strtok(input, " ");
	int count =0;
	
	while(token != NULL){
		count++;
		token = strtok(NULL, " ");
	}
	printf("%d", count);
	
return 0;
}
