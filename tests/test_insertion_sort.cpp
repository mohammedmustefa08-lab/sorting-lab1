#include <gtest/gtest.h>
#include "insertion_sort.h"

TEST(InsertionSort, AlreadySorted) {
    int a[] = { 1, 2, 3, 4, 5 };
    insertion_sort(a, 5);
    for (int i = 0; i < 5; i++) EXPECT_EQ(a[i], i + 1);
}

TEST(InsertionSort, ReverseSorted) {
    int a[] = { 5, 4, 3, 2, 1 };
    insertion_sort(a, 5);
    for (int i = 0; i < 5; i++) EXPECT_EQ(a[i], i + 1);
}

TEST(InsertionSort, EmptyArray) {
    int a[1] = { 0 };              // fixed: was int a[] = {};
    insertion_sort(a, 0);
    SUCCEED();
}

TEST(InsertionSort, Variant9) {
    int a[] = { 7, 17, 9, 3, 13, 1, 16, 10 };
    insertion_sort(a, 8);
    int expected[] = { 1, 3, 7, 9, 10, 13, 16, 17 };
    for (int i = 0; i < 8; i++) EXPECT_EQ(a[i], expected[i]);
}