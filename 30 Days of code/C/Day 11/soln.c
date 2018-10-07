#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int N = 6;
    int arr[N][N];

    for(int arr_i = 0; arr_i < N; arr_i++) {
       for(int arr_j = 0; arr_j < N; arr_j++) {
          scanf("%d",&arr[arr_i][arr_j]);
       }
    }

    int max = -64;
    int curr = 0;
    for(int arr_i = 0; arr_i < N - 2; arr_i++) {
        for(int arr_j = 0; arr_j < N - 2; arr_j++) {
            int a = arr[arr_i][arr_j];
            int b = arr[arr_i][arr_j + 1];
            int c = arr[arr_i][arr_j + 2];
            int d = arr[arr_i + 1][arr_j + 1];
            int e = arr[arr_i + 2][arr_j];
            int f = arr[arr_i + 2][arr_j + 1];
            int g = arr[arr_i + 2][arr_j + 2];

            curr = a + b + c + d + e + f + g;
            if(curr > max) {
                max = curr;
            }
        }
    }

    printf("%d", max);

    return 0;
}
