// by Lihuan Li
// 12/04/2018
//wk05 An Odd Product

#include <stdio.h>

int main (void) {

    int lower, upper;

    printf ("Enter lower: ");
    scanf ("%d", &lower);

    printf ("Enter upper: ");
    scanf ("%d", &upper);

    int count = 0;
    int product = 1;
    int i = lower + 1;
    while (i < upper) {
        if (i % 2 != 0) {
            product = product * i;
            count++;
        }
        i++;
    }

    if (count == 0) {
        printf ("1\n");
    } else {
        printf ("%d\n", product);
    }

    return 0;
}
