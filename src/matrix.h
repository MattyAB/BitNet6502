struct int_matrix {
    signed char *data;
    char width;
    char height;
};

struct ternary_matrix {
    // void *data;
    char *data;
    char width;
    char height;
};

extern struct int_matrix y;
extern struct ternary_matrix x;
extern struct int_matrix z;
