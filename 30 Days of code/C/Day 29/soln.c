#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int max_and(int n, int k) {
    int max = -1;

    for(int A = 1; A < n; A++) {
        for(int B = A + 1; B <= n; B++) {
            int and = A & B;

            if(and > max && and < k) {
                max = and;
            }
        }
    }

    return max;
}

int main() {
    int t; 

    scanf("%d", &t);

    for(int a0 = 0; a0 < t; a0++){
        int n; 
        int k; 
        scanf("%d %d", &n,&k);

        printf("%d\n", max_and(n, k));
    }

    return 0;
}
