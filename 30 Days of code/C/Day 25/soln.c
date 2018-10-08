#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_prime(int n) {
    if(n == 1) return false;
    if(n <= 3) return true;

    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return false;
    }

    return true;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T, n;
    scanf("%d", &T);

    for(int i = 0; i < T; i++) {
        scanf("%d", &n);
        if(is_prime(n)) {
            printf("Prime\n");
        } else printf("Not prime\n");
    }

    return 0;
}
