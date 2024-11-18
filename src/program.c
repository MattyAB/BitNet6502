#include <stdio.h>
#include <stdlib.h>

// #include "matrix.h"

extern char text[];

extern char x[];
// extern const char y[];

char i, j;

struct matrix {
    char *data;
    char width;
    char height;
};

struct matrix global_matrix;

void print_matrix(struct matrix *m) {
    for (i = 0; i < m->height; i++) {
        for (j = 0; j < m->width; j++) {
            printf("%d ", m->data[i * m->height + j]);
        }
        printf("\n");
    }
}

int main (void) {
    printf ("\n%s\n", text);

    global_matrix.data = x;
    global_matrix.width = 2;
    global_matrix.height = 2;

    print_matrix(&global_matrix);

    return EXIT_SUCCESS;
}
