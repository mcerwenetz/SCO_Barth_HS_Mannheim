#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

	char input[100];
	fgets(input, sizeof(input), stdin);
	
	
	const int stringsize = strlen(input);
	char stri[stringsize];
	
	strcpy(stri, input);
	
	
	char* token = strtok(input, " ");
	
	
	
	int count =0;
	
	while(token != NULL){
		count++;
		token = strtok(NULL, " ");
	}
	
	int* numbers = calloc(count, sizeof(int));
	
	
	token = strtok(stri, " ");
	int i =0;
	while(token != NULL){
		numbers[i] = atoi(token);
		token = strtok(NULL, " ");
		++i;
	}
	

	
	free(numbers);
	
	
return 0;
}
