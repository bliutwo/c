#include <stdio.h>

void printArray(int array[], int length) {
    printf("[");
    for (int i = 0; i < length - 1; i++) {
        printf("%d, ", array[i]);
    }
    printf("%d]\n", array[length - 1]);
}

int main() {
    int length = 5;
    int array[length];
    for (int i = 0; i < length; i++) {
        array[i] = i;
    }
    printArray(array, length);
    return 0;
}
