#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "queue.h"

int main(){
	char input[100];
	fgets(input, sizeof(input), stdin);
	const int stringsize = strlen(input);
	char stri[stringsize];
	strcpy(stri, input);

		
	char* token = strtok(input, " ");
	
	
	int counter=0;
		
	while(token != NULL){
		counter++;
		token = strtok(NULL, " ");
	}

	char* input_strings[counter];
	
	
	token = strtok(stri, " ");
	int i =0;
	while(token != NULL){
		input_strings[i] = strdup(token);
		i++;
		token = strtok(NULL, " ");
	}


	for (int i=0; i <= counter; i++){
		printf("%s", input_strings[i]);
	}
	
	free(input_strings);
	
}
