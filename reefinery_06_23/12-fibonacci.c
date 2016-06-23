#include <stdio.h>

int main (void)
{
    long unsigned f, s, p, i;
    f = 1;
    s = 2;
    p = 0;

    printf("1, ");
    printf("2, ");
    
    for (i=0; i<98; i++) {
        p = f + s;
        if (i==97) {
            printf("%lu", p);
        }
        printf("%lu, ", p);
        f = s;
        s = p;
    }

    return 0;
}