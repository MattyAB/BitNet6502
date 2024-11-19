#include <stdio.h>
#include <stdlib.h>

#include "matrix.h"

char i, j, k, l;
signed char a;
unsigned char b;

void print_int_matrix(struct int_matrix *m) {
    for (i = 0; i < m->height; i++) {
        for (j = 0; j < m->width; j++) {
            printf("%4d", m->data[i * m->width + j]);
        }
        printf("\n");
    }
}

void print_ternary_matrix(struct ternary_matrix *m) {
    if (m->width % 4 != 0) printf("Error encountered: ternary matrix width must be a multiple of 4.");

    for (i = 0; i < m->height; i++) {
        for (j = 0; j < m->width / 4; j++) {
            b = m->data[i * m->width / 4 + j];
            
            for (k = 0; k < 4; k++) {
                switch (b & 0b11) {
                    case 0b0:
                        printf("0  ");
                        break;
                    case 0b1:
                        printf("1  ");
                        break;
                    case 0b10:
                        printf("-1 ");
                        break;
                }
                b = b >> 2;
            }
        }
        printf("\n");
    }
}

// Multiples z := x @ y
void matrix_multiply(struct ternary_matrix *x, struct int_matrix *y, struct int_matrix *z) {
    if (x->width != y->height) {
        printf("Error encountered: matrix dimensions must align\n");
        printf("%dx%d, %dx%d \n", x->height, x->width, y->height, y->width);
    }

    for (i = 0; i < x->height; i++) {
        for (j = 0; j < y->width; j++) {
            a = 0;
            
            for (k = 0; k < x->width / 4; k++) {
                // printf("%d", i);
                b = x->data[i * (x->width / 4) + k];
            
                for (l = 0; l < 4; l++) {
                    switch (b & 0b11) {
                        case 0b0:
                            break;
                        case 0b1:
                            a += y->data[j + y->width * (4 * k + l)];
                            break;
                        case 0b10:
                            a -= y->data[j + y->width * (4 * k + l)];
                            break;
                        default:
                            printf("\nError encountered: unknown value in ternary");
                            printf("\ni: %d, j: %d, k: %d, l: %d\n", i, j, k, l);
                            break;
                    }
                    
                    b = b >> 2;
                }
            }

            z->data[i * y->width + j] = a;
        }
    }
}

