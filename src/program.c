#include <stdio.h>
#include <stdlib.h>

#include "matrix.h"
#include "matrix_const.h"

extern char text[];

int main (void) {
    printf ("\n%s\n", text);

    print_ternary_matrix(&x);
    printf("\n");
    print_int_matrix(&y);

    matrix_multiply(&x, &y, &z);

    printf("\n");
    print_int_matrix(&z);


    return EXIT_SUCCESS;
}
