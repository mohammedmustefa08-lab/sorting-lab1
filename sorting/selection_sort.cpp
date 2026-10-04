#include "selection_sort.h"

template <typename T>
void selection_sort(T arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) minIdx = j;
        }
        if (minIdx != i) {
            T tmp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = tmp;
        }
    }
}

template void selection_sort<int>(int[], int);
template void selection_sort<double>(double[], int);