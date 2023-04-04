#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "queue.h"

int main(){
	char input[10000];
	fgets(input, sizeof(input), stdin);
	const int stringsize = strlen(input);
	//create copy of input because strtok manipulates string
	char stri[stringsize];
	strcpy(stri, input);

		
	char* token = strtok(input, " ");
	
	//first get size of string (how many strings are in tokenized str)
	
	int counter=0;
		
	while(token != NULL){
		counter++;
		token = strtok(NULL, " ");
	}

	
	struct Queue queue;
		
	token = strtok(stri, " ");
	int i =0;
	while(token != NULL){
		char *dup = malloc(strlen(token) + 1);
		strcpy(dup, token);
		enter(dup, &queue);
		i++;
		token = strtok(NULL, " ");
	}


	int max_string_len=0;
	char* maxstring;
	for (int i=0; i < counter; i++){
		char* data = leave(&queue);
		fprintf(stdout,"%s ", data);
		int string_size = strlen(data);
		if(string_size > max_string_len){
				max_string_len=string_size;
				maxstring = (char*) malloc(string_size);
				strcpy(maxstring, data);
				free(data);
		}else{
			free(data);
		}
	}
	printf("%s : %d", maxstring, max_string_len);
	free(maxstring);
}
