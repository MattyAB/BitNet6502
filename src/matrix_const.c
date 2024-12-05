#include "matrix.h"

#define RESIDUAL_LEN 8
#define HIDDEN_LEN 8
#define MAX_SEQ_LEN 256

char WQ_data[] = { 
    0b01010101, 0b00011010,
    0b01010101, 0b01011010,
    0b01010101, 0b10011010,
    0b01010101, 0b00011010,
    0b01010101, 0b10011010,
    0b01010101, 0b00011010,
    0b01010101, 0b00011010,
    0b01010101, 0b00011010,
};

struct ternary_matrix WQ = {
    WQ_data,
    RESIDUAL_LEN,
    HIDDEN_LEN
};

char WK_data[] = { 
    0b01010101, 0b00011010,
    0b01010101, 0b01011010,
    0b01010101, 0b10011010,
    0b01010101, 0b00011010,
    0b01010101, 0b10011010,
    0b01010101, 0b00011010,
    0b01010101, 0b00011010,
    0b01010101, 0b00011010,
};

struct ternary_matrix WK = {
    WK_data,
    RESIDUAL_LEN,
    HIDDEN_LEN
};

char WV_data[] = { 
    0b01010101, 0b00011010,
    0b01010101, 0b01011010,
    0b01010101, 0b10011010,
    0b01010101, 0b00011010,
    0b01010101, 0b10011010,
    0b01010101, 0b00011010,
    0b01010101, 0b00011010,
    0b01010101, 0b00011010,
};

struct ternary_matrix WV = {
    WV_data,
    RESIDUAL_LEN,
    HIDDEN_LEN
};

signed char Q_data[HIDDEN_LEN * MAX_SEQ_LEN];
struct int_matrix Q = {
    Q_data,
    HIDDEN_LEN,
    MAX_SEQ_LEN
};

signed char K_data[HIDDEN_LEN * MAX_SEQ_LEN];
struct int_matrix K = {
    K_data,
    HIDDEN_LEN,
    MAX_SEQ_LEN
};

signed char V_data[HIDDEN_LEN * MAX_SEQ_LEN];
struct int_matrix V = {
    V_data,
    HIDDEN_LEN,
    MAX_SEQ_LEN
};

signed char y_data[] = { 125, 14, 26, -23, -1, 12, 14, -123,
                         1, 14, -26, -3, -1, 12, 112, -13};
signed char z_data[RESIDUAL_LEN * 2];

struct int_matrix y = {
    y_data,
    RESIDUAL_LEN,
    2 // sequence length
};

struct int_matrix z = {
    z_data,
    RESIDUAL_LEN,
    2
};
