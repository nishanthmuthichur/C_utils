#include <stdio.h>
#include <stdlib.h>

#include <memutils.h>

#define Nx 4
#define Ny 3

int main() { 

	int i, j;
	int **array_2D;

	array_2D = (int **) malloc_2D_v1(Nx, Ny, sizeof(int));

	for (i = 0; i < Nx; i++) {
	  for (j = 0; j < Ny; j++) {

	       array_2D[i][j] = -1;	
	       fprintf(stdout, "array_2D[%d][%d] = %d\n", i, j, array_2D[i][j]);

	  }
	}

	free_malloc_2D_v1(array_2D, Nx, Ny);

	fprintf(stdout, "Program executed successfully\n");

	return 0;

}
