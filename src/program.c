#include <stdio.h>
#include <stdlib.h>

#include "matrix.h"

extern char text[];

char i, j;

struct matrix global_matrix;

void print_matrix(struct matrix *m) {
    for (i = 0; i < m->height; i++) {
        for (j = 0; j < m->width; j++) {
            printf("%4d", m->data[i * m->height + j]);
        }
        printf("\n");
    }
}

int main (void) {
    printf ("\n%s\n", text);

    // global_matrix.data = x;
    // global_matrix.width = 2;
    // global_matrix.height = 2;

    print_matrix(&x);

    return EXIT_SUCCESS;
}
