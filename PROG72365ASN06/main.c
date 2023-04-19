#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sorting_algorithms.h"

#define ARRAY_SIZE 20000

int main() {
    int arr1[ARRAY_SIZE], arr2[ARRAY_SIZE];
    srand(time(0));

    for (int i = 0; i < ARRAY_SIZE; i++) {
        int random_num = rand() % 100000;
        arr1[i] = random_num;
        arr2[i] = random_num;
    }

    clock_t startTime, endTime;
    double bubbleSortTime, heapSortTime;

    startTime = clock();
    bubble_sort(arr1, ARRAY_SIZE);
    endTime = clock();
    bubbleSortTime = (double)(endTime - startTime) / CLOCKS_PER_SEC;

    startTime = clock();
    heap_sort(arr2, ARRAY_SIZE);
    endTime = clock();
    heapSortTime = (double)(endTime - startTime) / CLOCKS_PER_SEC;

    printf("Bubble sort time: %f seconds\n", bubbleSortTime);
    printf("Heap sort time: %f seconds\n", heapSortTime);

    return 0;
}
