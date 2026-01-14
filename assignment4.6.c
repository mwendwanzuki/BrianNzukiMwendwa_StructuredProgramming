#include <stdio.h>

int main() {
    int arr[4];
    int i;

    // Input elements
    printf("Input 4 elements in the array:\n");
    for (i = 0; i < 4; i++) {
        printf("element-%d: ", i);
        scanf("%d", &arr[i]);
    }


    printf("The elements stored in the array are: ");
    for (i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
