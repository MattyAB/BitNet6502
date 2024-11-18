#include <stdio.h>
#include <stdlib.h>

extern const char text[];       /* In text.s */

int main (void)
{
    printf ("\n%s\n", text);
    return EXIT_SUCCESS;
}
