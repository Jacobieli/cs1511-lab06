// by Lihuan Li
// 12/04/2018
//wk05 counting up

#include <stdio.h>

int main (void) {

    int num;

    printf ("Enter number: ");
    scanf ("%d", &num);

    int flag = 0;
    int i = 2;
    while (i < num/2 && flag != 1) {
        if (num % i == 0) {
            flag = 1;
        }
        i++;
    }

    int j = 2;
    if (flag != 1) {
        while (num % j == 0) {
            printf ("%d", j);
            num = num / j;
            j++;
        }
    }
