#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    const char regex[] = "@gmail.com";
    bool flag = true;
    int N;

    scanf("%d",  &N);

    char arr[N][50];

    for(int i = 0; i < N; i++){
        char* firstName = (char *)malloc(10240 * sizeof(char));
        char* emailID = (char *)malloc(10240 * sizeof(char));

        scanf("%s %s", firstName, emailID);

        for(int j = 0; j < strlen(emailID); j++) {
            /* We have found the start of the email address */
            if(emailID[j] == '@') {
                /* Compares the last part of the email with our regex ("@gmail.com") */
                for(int k = 0; k < strlen(regex); k++) {
                    if(emailID[j + k] != regex[k]) {
                        flag = false;
                        break;
                    }
                }

                if(flag) {
                    strcpy(arr[i], firstName);
                } else {
                    flag = true;
                    strcpy(arr[i], "null");
                }

                break;
            }
        }
    }

    /* Sorts array of names in lexicographical order */
    for(int i = 0; i < N - 1; i++) {
        for(int j = i + 1; j < N; j++) {
            if(strcmp(arr[i], arr[j]) > 0) {
                char* temp = (char *)malloc(10240 * sizeof(char));
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[i]);
                strcpy(arr[i], temp);
            }
        }
    }

    /* Prints our sorted array */
    for(int i = 0; i < N; i++) {
        if(strcmp(arr[i], "null") != 0) {
            printf("%s\n", arr[i]);
        }
    }

    return 0;
}
