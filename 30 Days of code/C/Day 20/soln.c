#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

/* 
 * Preforms a bubble sort on the passed array
 * and returns the total number of swaps
 */
int bubbleSort(int* a, int n) {
    int swapTotal = 0;
    for (int i = 0; i < n; i++) {
        // Track number of elements swapped during a single array traversal
        int numberOfSwaps = 0;
        
        for (int j = 0; j < n - 1; j++) {
            // Swap adjacent elements if they are in decreasing order
            if (a[j] > a[j + 1]) {
                int temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
                
                numberOfSwaps++;
            }
        }
        
        // If no elements were swapped during a traversal, array is sorted
        if (numberOfSwaps == 0) {
            break;
        }

        swapTotal += numberOfSwaps;
    }

    return swapTotal;
}

int main() {
    int n; 

    scanf("%d", &n);

    int *a = malloc(sizeof(int) * n);

    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d", &a[a_i]);
    }

    printf("Array is sorted in %d swaps.\n", bubbleSort(a, n));
    printf("First Element: %d\n", a[0]);
    printf("Last Element: %d\n", a[n - 1]);


    return 0;
}
