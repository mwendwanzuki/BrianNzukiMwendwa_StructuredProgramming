#include <stdio.h>

int main() {
    int n, i, j, temp;


    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    int arr[n];


    printf("Input %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        printf("element-%d: ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
    }
    }
    }


    printf("Elements in ascending order are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
