#include <stdio.h>

int main() {

    int arr[6][4] = {
        {10, 20, 30, 40},
        {11, 21, 31, 41},
        {12, 22, 32, 42},
        {13, 23, 33, 43},
        {14, 24, 34, 44},
        {15, 25, 35, 45}
    };


    printf("Elements of the 2D array are:\n");
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 4; j++) {
            printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
        }
    }

    return 0;
}
