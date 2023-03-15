#include "quad.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
	printf("quads\n");
	for(int i=1; i<argc; i++){
		printf("%s:%.2f\n", argv[i], quadriere(atof(argv[i])));
	}

	return 0;
}
