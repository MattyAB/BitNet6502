#include <stdio.h>
#include <stdlib.h>

#include "matrix.h"

extern char text[];

char i, j, k;

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
            unsigned char byte = m->data[i * m->width / 4 + j];
            
            for (k = 0; k < 4; k++) {
                switch (byte & 0b11) {
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
                byte = byte >> 2;
            }
        }
        printf("\n");
    }
}

// void matrix_multiply(struct ternary_matrix *x)

int main (void) {
    printf ("\n%s\n", text);

    print_ternary_matrix(&x);
    printf("\n");
    print_int_matrix(&y);



    return EXIT_SUCCESS;
}
