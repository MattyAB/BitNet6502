struct int_matrix {
    signed char *data;
    char height;
    char width;
};

struct ternary_matrix {
    // void *data;
    char *data;
    char height;
    char width;
};

void print_int_matrix(struct int_matrix *m);
void print_ternary_matrix(struct ternary_matrix *m);
void matrix_multiply(struct ternary_matrix *x, struct int_matrix *y, struct int_matrix *z);