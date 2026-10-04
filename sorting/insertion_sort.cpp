#include "insertion_sort.h"

template <typename T>
void insertion_sort(T arr[], int n) {
    for (int i = 1; i < n; i++) {
        T key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

template void insertion_sort<int>(int[], int);
template void insertion_sort<double>(double[], int);