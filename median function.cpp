#include <stdio.h>

double median(int* arr, int size) {
    if (size % 2 == 0) {  // Even number of elements
        int i = size/2 - 1;
        int j = size/2;
        return ((double)(*(arr + i)) + *(arr + j))/2.0;
    } else {  // Odd number of elements
        int i = size/2;
        return *(arr + i);
    }
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int size = 5;
    double med = median(arr, size);
    printf("Median: %lf\n", med);
    return 0;
}
