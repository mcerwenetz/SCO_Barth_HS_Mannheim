#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

	char input[100];
	fgets(input, sizeof(input), stdin);
	
	char* token = strtok(input, " ");
	int count =0;
	
	while(token != NULL){
		count++;
		token = strtok(NULL, " ");
	}
	printf("count is %d\n", count);
	
	int* numbers = calloc(count, sizeof(int));
	
	token = strtok(input, " ");
	while(token != NULL){
		printf("%s", token);
		token = strtok(NULL, " ");
	}
	
	for(int i =0; i < count; i++){
		//printf("%d", numbers[i]);
		}
	
	free(numbers);
	
	
return 0;
}
