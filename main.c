#include <stdio.h>
#include <math.h>

int sum (int arr[], int size) {
    int total = 0;
    for ( int i = 0; i < size; i++ ) {
        total  += arr[i];
    }
    return total;
}

double average(int arr[], int size) {
    return (double)sum(arr,  size) /  size;
}

double  standard_deviation (int arr[], int size) {
    double avg = average(arr, size);
    double sum  = 0;
    for (int i = 0; i < size; i++) {
        sum += (arr[i] - avg) * (arr[i] - avg);
    }
    return sqrt(sum / size);
}

int main() {
    int arr1[] = {1,  2, 3, 4, 5};
    int arr2[] = {10,  20,  30, 40, 50};
    int arr3[] = {3, 7, 12,  19, 21};

    int size1 = 5;
    int size2 = 5;
    int size3 = 5;

    printf(" Array 1 - Sum: %d, Average: %.2f, Std Dev: %.2f\n", sum(arr1, size1), average(arr1, size1), standard_deviation(arr1, size1));
    printf("Array 2 - Sum: %d, Average: %.2f, Std Dev: %.2f\n", sum(arr2, size2), average(arr2, size2), standard_deviation(arr2, size2));
    printf("Array 3 - Sum: %d, Average: %.2f, Std Dev: %.2f\n", sum(arr3, size3), average(arr3, size3), standard_deviation(arr3, size3));

    return 0;
}

