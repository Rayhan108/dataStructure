#include<stdio.h>

int main() {
    int A[5] = {7, 6, 4, 3, 2};
    int length = sizeof(A) / sizeof(A[0]);

    for (int k = 0; k < length; k++) {
        printf("A[%d]=%d\n", k, A[k]);
    }

    return 0;
}
