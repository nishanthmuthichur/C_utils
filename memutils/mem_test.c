#include <stdio.h>
#include <stdlib.h>

#include <memutils.h>

#define N 100

int main() { 

	int *ptr;

	int **int_ptr;

	ptr = (int*) malloc(N * sizeof(int));

	free(ptr);

	int_ptr = (int **)malloc_2D(N, N, sizeof(int));

	fprintf(stdout, "Program executed successfully\n");

	return 0;

}
