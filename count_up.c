// by Lihuan Li
// 12/04/2018
//wk05 counting up

#include <stdio.h>

int main (void) {

    int lower, upper;

    printf ("Enter lower: ");
    scanf ("%d", &lower);

    printf ("Enter upper: ");
    scanf ("%d", &upper);

    int i = lower + 1;
    while (i < upper) {
        printf ("%d\n", i);
        i++;
    }

    return 0;
}
