#include "matrix.h"

char x_data[] = { 0b01010101, 0b00011010 };
signed char y_data[] = { 125, 122, 115, 99, -100, 12, 14, -123 };
signed char z_data[4];

struct ternary_matrix x = {
    x_data,
    2,
    4
};

struct int_matrix y = {
    y_data,
    4,
    2 
};

struct int_matrix z = {
    z_data,
    2,
    2
};