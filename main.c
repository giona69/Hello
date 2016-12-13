#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0;

    int y = 0;

    printf("Dammi due numeri: ");

    scanf("%d", &x);

    scanf("%d", &y);

    printf("La moltiplicazione dei due numeri e' %d\n", x*y);

    return 0;
}
