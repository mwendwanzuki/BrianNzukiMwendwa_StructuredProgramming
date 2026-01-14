#include <stdio.h>

#define BUFFER_SIZE 5


int buffer[BUFFER_SIZE];
int count = 0;
int head = 0;

void insertSample(int value) {
    int pos;
    if (count < BUFFER_SIZE) {

        pos = (head + count) % BUFFER_SIZE;
        buffer[pos] = value;
        count++;
    } else {


        buffer[head] = value;
        head = (head + 1) % BUFFER_SIZE;
    }
}


void printSamples() {

    printf("Samples in chronological order: ");
    for (int i = 0; i < count; i++) {
        int pos = (head + i) % BUFFER_SIZE;
        printf("%d ", buffer[pos]);
    }
    printf("\n");
}


int main() {

    insertSample(10);
    insertSample(12);
    insertSample(14);
    insertSample(15);

    printSamples();


    insertSample(57);
    insertSample(23);

    printSamples();


    return 0;
}
