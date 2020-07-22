#include <stdio.h>
#include "header.h"


int main() {

    hello_message();

        double n1, n, value;
        char ch, sign;

        printf ("Give me a command:\n");

        scanf ("%c", &ch);

        if (ch == 'a'){
                system ("color FC");

        printf ("Give me a number: (don't give me 1.22 or like this)\n");

        scanf ("%d", &n1);

        printf ("Give me another number:");

        scanf ("%d", &n);

        sign = '+';

        value = n1 + n;

        printf ("%d %c %d = %d\n", n1, sign, n, value);

        sign = '-';

        value = n1 - n;

        printf ("%d %c %d = %d\n", n1, sign, n, value);

        sign = '*';

        value = n1 * n;

        printf ("%d %c %d = %d\n", n1, sign, n, value);

        sign = '/';

        value = n1 / n;

        printf ("%d %c %d = %d\n", n1, sign, n, value);

        }

    return 0;
}

