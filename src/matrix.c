#include "matrix.h"

char x_data[] = { 1, 0, 4, 7, 93, 25, 74, 12 };
char y_data[] = { 0b00011000, 0b00011011 };

struct int_matrix y = {
    x_data,
    2,
    4 
};

struct ternary_matrix x = {
    y_data,
    4,
    2
};
