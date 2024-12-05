#include <stdio.h>
#include <stdlib.h>

#include "matrix.h"
#include "matrix_const.h"
#include "F.h"
#include "model.h"

// extern struct int_matrix Q;

int main (void) {

//     matrix_multiply(&WQ, &y, &Q);

    attention(&y, &WQ, &WK, &WV, &z);

    // print_int_matrix(&rms_result);


    // test_long = 65536;
    // printf("%lu\n", test_long);
    // test_long = sqrt_long(test_long);
    // printf("%lu\n", test_long);

    return EXIT_SUCCESS;
}
