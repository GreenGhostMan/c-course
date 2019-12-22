#include <stdio.h>
#include <stdlib.h>
int main(){
	int x; //stack
	int *px = malloc(sizeof(int)); 
	char *word = malloc(50*sizeof(char));

	free(word);

	return 0;
}
