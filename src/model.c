#include "matrix.h"
#include "matrix_const.h"
#include "model.h"

extern struct int_matrix Q;
extern struct int_matrix K;
extern struct int_matrix V;

struct int_matrix *attention(struct int_matrix *x,
                             struct ternary_matrix *WQ,
                             struct ternary_matrix *WK,
                             struct ternary_matrix *WV,
                             struct int_matrix *output) {
    Q.width = x->width;
    K.width = x->width;
    V.width = x->width;

    matrix_multiply(WQ, x, &Q);
    matrix_multiply(WK, x, &K);
    matrix_multiply(WV, x, &V);

    print_int_matrix(&Q);

    return output;
}
