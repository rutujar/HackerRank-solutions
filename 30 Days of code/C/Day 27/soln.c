#include <stdio.h>

int main() {
    printf("5\n");

    /* YES */
    printf("5 3\n");
    printf("-1 80 888 10 0\n");

    /* NO */
    printf("4 2\n");
    printf("-1 0 1 2\n");

    /* YES */
    printf("3 3\n");
    printf("-1 0 1\n");

    /* NO */
    printf("6 1\n");
    printf("-1 0 1 2 3 4\n");

    /* YES */
    printf("7 3\n");
    printf("-1 0 1 2 3 4\n");

    return 0;
}
