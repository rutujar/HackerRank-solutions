#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int actDay, actMonth, actYear; // The actual return date
    int expDay, expMonth, expYear; // The expected return date

    scanf("%d %d %d", &actDay, &actMonth, &actYear); // The actual return date
    scanf("%d %d %d", &expDay, &expMonth, &expYear); // The expected return date

    if(actYear < expYear) printf("0");
    else if(actYear > expYear) {
        printf("10000\n");
    } else if(actMonth > expMonth) {
        int ret = 500 * (actMonth - expMonth);
        printf("%d", ret);
    } else if(actMonth < expMonth) {
        printf("0");
    } else if(actDay > expDay) {
        int ret = 15 * (actDay - expDay);
        printf("%d", ret);
    } else printf("0");

    return 0;
}
