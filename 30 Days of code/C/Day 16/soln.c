#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void mergesort( int arr[], int left, int right );

int main() {
    
    int n, *arr, i;
    
    scanf("%d", &n);
    
    arr = (int *) malloc( n * sizeof(int) );
    
    if ( !arr ) {
        exit(0);
    }
    
    for ( i = 0; i < n; ++i ) {
        scanf("%d", &arr[i]);
    }
    
    mergesort( arr, 0, n - 1 );
    
    int min_abs = abs( arr[0] - arr[1] );
    for ( i = 1; i < n - 1; ++i ) {
        if ( abs( arr[i] - arr[i + 1] ) < min_abs ) {
            min_abs = abs( arr[i] - arr[i + 1] );   
        }
    }
    
    for ( i = 0; i < n - 1; ++i ) {
        if ( abs( arr[i] - arr[i + 1] ) == min_abs ) {
            printf("%d %d ", arr[i], arr[i + 1]);
        }
    }

    free( arr );
    
    return 0;
    
}

void mergesort( int arr[], int left, int right ) {
    
	int i, j, k;
	int middle;
	int *tmp;

	tmp = (int *) malloc( (right + 1) * sizeof(int) );

	if ( !tmp ) {
		exit(0);
	}

	if ( right > left ) {
		middle = (left + right) / 2;
		mergesort( arr, left, middle );
		mergesort( arr, middle + 1, right );

		for ( i = left; i <= middle; ++i ) {
			tmp[i] = arr[i];
		}

		for ( j = middle + 1; j <= right; ++j ) {
			tmp[right + middle + 1 - j] = arr[j];
		}

		i = left;
		j = right;

		for ( k = left; k <= right; ++k ) {
			if ( tmp[i] < tmp[j] ) {
				arr[k] = tmp[i++];
			}
			else {
				arr[k] = tmp[j--];
			}
		}
	}

	free( tmp );
    
}
