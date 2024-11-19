#include <stdio.h>
#include <stdlib.h>

#include "matrix.h"
#include "matrix_const.h"
#include "F.h"

extern struct int_matrix rms_result;

int main (void) {
    matrix_multiply(&x, &y, &z);

    print_int_matrix(&y);
    printf("\n");

    rms_norm(&y);

    print_int_matrix(&rms_result);


    // test_long = 65536;
    // printf("%lu\n", test_long);
    // test_long = sqrt_long(test_long);
    // printf("%lu\n", test_long);

    return EXIT_SUCCESS;
}
