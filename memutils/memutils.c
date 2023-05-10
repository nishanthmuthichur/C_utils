#include <stdio.h>
#include <stdlib.h>

void** malloc_2D_v1(int Nx, int Ny, size_t N_bytes) {

	unsigned int N_pts, idx;
	void **mat;
	void *data;

	N_pts = Nx * Ny;

	data = (void*) malloc(N_pts * N_bytes);

	memset(data, 0, (size_t)(N_pts * N_bytes));

	mat = (void**) malloc(Nx * sizeof(void *));

	for (idx = 0; idx < Nx; idx++) {

	     mat[idx] = data + idx * (Ny * N_bytes);

	}

	fprintf(stdout, "Memory for 2D array allocated successfully.\n");

	return mat;
}

void free_malloc_2D_v1(void** mat, int Nx, int Ny) {


	int idx;
	
	free(mat[0]);

	free(mat);

	fprintf(stdout, "Memory deallocated successfully.\n");
	


}
