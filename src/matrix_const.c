#include "matrix.h"

#define RESIDUAL_LEN 8

char x_data[] = { 
    0b01010101, 0b00011010,
    0b01010101, 0b01011010,
    0b01010101, 0b10011010,
    0b01010101, 0b00011010,
    0b01010101, 0b10011010,
    0b01010101, 0b00011010,
    0b01010101, 0b00011010,
    0b01010101, 0b00011010,
};
// signed char y_data[] = { 125, 122, 115, 99, -100, 12, 14, -123 };
signed char y_data[] = { 125, 14, 26, -23, -1, 12, 14, -123 };
signed char z_data[RESIDUAL_LEN];
signed char rms_data[RESIDUAL_LEN];

struct ternary_matrix x = {
    x_data,
    RESIDUAL_LEN,
    RESIDUAL_LEN
};

struct int_matrix y = {
    y_data,
    RESIDUAL_LEN,
    1
};

struct int_matrix z = {
    z_data,
    RESIDUAL_LEN,
    1
};

struct int_matrix rms_result = {
    rms_data,
    RESIDUAL_LEN,
    1
};